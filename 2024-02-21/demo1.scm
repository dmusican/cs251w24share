(define a
  (lambda ()
    (let ((x 0))
      (set! x (+ x 1))
      x)))

(a)
(a)
(a)

(define b
  (lambda ()
    (let ((x 0))
      (set! x (+ x 1))
      x)))

(a)
(a)
(a)
