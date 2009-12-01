;;
;; Vector 2 Math
;;
;; Written by: Sean Chapel
;; License: BSD
;; Date: 12/01/09 
;;

;; The vector2 structure
(define-structure vec2 x y)

;; zero'ed vector
(define vec2-zero
  (make-vec2 0 0))

;; easy way to peform an operation on all elements of the vector
(define (vec2-op op a b)
  (make-vec2 (op (vec2-x a) (vec2-x b))
	     (op (vec2-y a) (vec2-y b))))

;; adds v1 and v2
(define (vec2-add a b)
  (vec2-op + a b))

;; subtract v2 from v1
(define (vec2-sub a b)
  (vec2-op - a b))

;; scales a vector
(define (vec2-scale a scale)
  (make-vec2 (* (vec2-x a) scale)
	     (* (vec2-y a) scale)))

;; displays the vector well formated
(define (vec2-display a)
  (display "(")
  (display (vec2-x a))
  (display ",")
  (display (vec2-y a))
  (display ")\n"))

;; normalizes the vector
(define (vec2-norm a)
  (vec2-scale a (/ 1.0 (vec2-mag a))))


;; dot product
(define (vec2-dot a b)
  (+ (* (vec2-x a) (vec2-x b))
     (* (vec2-y a) (vec2-y b))))

;; magnitude
(define (vec2-mag a)
  (sqrt (vec2-dot a a)))

;; distance
(define (vec2-dist a b)
  (vec2-mag (vec2-sub a b)))

;; linear interpolation
(define (vec2-lerp a b time)
  (vec2-add a (vec2-scale (vec2-sub b a) time)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;                        test code
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;(define a (make-vec2 1 1))
;;(define b (make-vec2 2 2))

;;(vec2-add a b)
;;(vec2-sub a b)
;;(vec2-scale b 4)
;;(vec2-norm a)
;;(vec2-dot a b)

;;(vec2-mag b)
;;(vec2-dist a b)
;;(vec4-lerp a b 0)