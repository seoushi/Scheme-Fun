;;
;; Vector 3 Math
;;
;; Written by: Sean Chapel
;; License: BSD
;; Date: 09/21/09 
;;


;; The vector3 structure
(define-structure vec3 x y z)


;; easy way to peform an operation on all elements of the vector
(define (vec3-op op v1 v2)
  (make-vec3 (op (vec3-x v1) (vec3-x v2))
	     (op (vec3-y v1) (vec3-y v2))
	     (op (vec3-z v1) (vec3-z v2))))


;; zero'ed vector
(define vec3-zero
  (make-vec3 0 0 0))


;; adds v1 and v2
(define (vec3-add v1 v2)
  (vec3-op + v1 v2))


;; subtracts v2 from v1
(define (vec3-sub v1 v2)
  (vec3-op - v1 v2))


;; scales the vector
(define (vec3-scale v scale)
  (make-vec3 (* (vec3-x v) scale)
	     (* (vec3-y v) scale)
	     (* (vec3-z v) scale)))


;; dot product
(define (vec3-dot v1 v2)
  (+ (* (vec3-x v1) (vec3-x v2))
     (* (vec3-y v1) (vec3-y v2))
     (* (vec3-z v1) (vec3-z v2))))


;; magnitude
(define (vec3-mag v)
  (sqrt (vec3-dot v v)))


;; normalize
(define (vec3-norm v)
  (vec3-scale v (/ 1 (vec3-mag v))))


;; distance between two vectors
(define (vec3-dist v1 v2)
  (vec3-mag (vec3-sub v1 v2)))


;; cross-product
(define (vec3-cross v1 v2)
  (make-vec3 (- (* (vec3-y v1) (vec3-z v2))
		(* (vec3-z v1) (vec3-y v2)))
	     (- (* (vec3-z v1) (vec3-x v2))
		(* (vec3-x v1) (vec3-z v2)))
	     (- (* (vec3-x v1) (vec3-y v2))
		(* (vec3-y v1) (vec3-x v2)))))


;; computes the normal for the fave between three points
(define (vec3-face-norm v1 v2 v3)
  (vec3-norm (vec3-cross (vec3-sub v1 v2)
			 (vec3-sub v1 v3))))


;; displays the vector well formated
(define (vec3-display v)
  (display "(")
  (display (vec3-x v))
  (display ",")
  (display (vec3-y v))
  (display ",")
  (display (vec3-z v))
  (display ")\n"))


;; linear interpolation
(define (vec3-lerp v1 v2 time)
  (vec3-add v1
	    (vec3-scale (vec3-sub v2 v1) 
			time)))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;                        test code
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;(define vec1 (make-vec3 1 2 3))
;;(define vec2 (make-vec3 2 3 1))
;;(define vec3 (make-vec3 3 1 2))

;;(vec3-display (vec3-add vec1 vec2))
;;(vec3-display (vec3-sub vec1 vec2))
;;(vec3-display (vec3-scale vec1 5))

;;(display (vec3-dot vec1 vec2))
;;(display "\n")

;;(display (vec3-mag vec1))
;;(display "\n")

;;(vec3-display (vec3-norm vec1))

;;(display (vec3-dist vec1 vec2))
;;(display "\n")

;;(vec3-display (vec3-cross vec1 vec2))
;;(vec3-display (vec3-face-norm vec1 vec2 vec3))
;;(vec3-display (vec3-lerp vec1 vec2 0.5))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;