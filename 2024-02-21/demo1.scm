(define a
  (lambda ()
    (let ((x 0))
      (set! x (+ x 1))
      x)))

(a)
(a)
(a)

(define b
  (let ((x 0))
    (lambda ()
      (set! x (+ x 1))
      x)))

(b)
(b)
(b)
