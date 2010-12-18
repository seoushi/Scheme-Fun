;; main loop for connections in an echo server
(define (echo-loop socket)
	(let ((content (read-line socket)))
		(if (eq? content #!eof)
			(display "connection closed\n")
			(and
				(display (string-append content "\n"))
				(display (string-append content "\n") socket)
				(force-output socket)
				(echo-loop socket)))))

;; creates a server given the port
(define (make-server port)
	(open-tcp-server (list server-address: "*" 
							port-number: port 
							eol-encoding: 'cr-lf)))


;; takes a tcp-client-socket and prints out it's ip and port
(define (display-connection connection)
	(let* ((info (tcp-client-peer-socket-info connection))
			(address (socket-info-address info))
			(port (socket-info-port-number info)))
			(and (display address)
				(display " : ")
				(display port)
				(display "\n"))))

;; a connection listener, takes in a server and a function to handle the new connections
;; new connections make a new thread and call the handler function with the socket
(define (server-loop server handler)
	(let ((client (read server)))
		(and
			(display "client connected:  ")
			(display-connection client)
			(thread-start! (make-thread (lambda () (handler client))))
			(server-loop server handler))))

;; starts an echo server on the designated port
(define (start-echo-server port)
		(server-loop (make-server port) echo-loop))

(start-echo-server 7777)