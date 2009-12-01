;;
;; Vector 4 Math
;;
;; Written by: Sean Chapel
;; License: BSD
;; Date: 12/01/09 
;;

;; The vector4 structure
(define-structure vec4 x y z w)

;; zero'ed vector
(define vec4-zero
  (make-vec4 0 0 0 0))

;; easy way to peform an operation on all elements of the vector
(define (vec4-op op v1 v2)
  (make-vec4 (op (vec4-x v1) (vec4-x v2))
	     (op (vec4-y v1) (vec4-y v2))
	     (op (vec4-z v1) (vec4-z v2))
	     (op (vec4-w v1) (vec4-w v2))))

;; adds v1 and v2
(define (vec4-add v1 v2)
  (vec4-op + v1 v2))

;; subtract v2 from v1
(define (vec4-sub v1 v2)
  (vec4-op - v1 v2))

;; scales a vector
(define (vec4-scale v1 scale)
  (make-vec4 (vec4-x * scale)
	     (vec4-y * scale)
	     (vec4-z * scale)
	     (vec4-w * scale)))

;; linear interpolation
(define (vec4-lerp v1 v2 time)
  (vec4-add v1 (vec4-scale (vec4-sub v2 v1) time)))

;; displays the vector well formated
(define (vec4-display v)
  (display "(")
  (display (vec4-x v))
  (display ",")
  (display (vec4-y v))
  (display ",")
  (display (vec4-z v))
  (display ",")
  (display (vec4-w v))
  (display ")\n"))


;; cross product
(define (vec4-cross a b c)
  (define xy (- (* (vec4-x b) (vec4-y c))
		(* (vec4-x c) (vec4-y b))))
  (define xz (- (* (vec4-x b) (vec4-z c))
		(* (vec4-x c) (vec4-z b))))
  (define xw (- (* (vec4-x b) (vec4-w c))
		(* (vec4-x c) (vec4-w b))))
  (define yz (- (* (vec4-y b) (vec4-z c))
		(* (vec4-y c) (vec4-z b))))
  (define yw (- (* (vec4-y b) (vec4-w c))
		(* (vec4-y c) (vec4-w b))))
  (define zw (- (* (vec4-z b) (vec4-w c))
		(* (vec4-z c) (vec4-w b))))

  (make-vec4 (+ (- (* (vec4-y a) zw)
		   (* (vec4-z a) yw))
		(* (vec4-w a) yz))
	     (- (* (vec4-z a) xw)
		(* (vec4-y a) zw)
		(* (vec4-w a) xz))
	     (+ (- (* (vec4-x a) yw)
		   (* (vec4-y a) xw))
		(* (vec4-w a) xy))
	     (- (* (vec4-y a) xz)
		(* (vec4-x a) yz)
		(* (vec4-z a) xy)))