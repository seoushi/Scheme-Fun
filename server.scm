(define-structure server
	host
	port
	sock
	running)

(define (server-open s)
  (server-sock-set! s 
	(open-tcp-server
   		(list
    		char-encoding: 'ASCII
			eol-encoding: 'cr-lf
			server-address: (server-host s)
			port-number: (server-port s)
			reuse-address: #t))))

(define (serve-new-connection port server)
	(let ((line (read-line port)))
		(display line)
		(display "\n")
		(cond
			((string=? "server quit" line)
				((server-running-set! server #f)
				;; force the server to timeout on the read so it can quit
				(input-port-timeout-set! (server-sock server) 0)))
			((string=? "quit" line)
				(display "<Closed Connection>\n")
				(close-port port))
			(#t
				(serve-new-connection port server)))))

(define (server-start connection-handler)
	(define (main-loop s)
		(let ((port (read (server-sock s))))
				(display "<New Connection>\n")
				(thread-start! (make-thread (lambda () (connection-handler port s)))))
		(if (server-running s)
			(main-loop s)
			(display "<Quiting>\n")))
		
			(define default-server (make-server "127.0.0.1" 9999 0 #t))
			(server-open default-server)
			
			(main-loop default-server))
			
(server-start serve-new-connection)