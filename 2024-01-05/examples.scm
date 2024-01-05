;;; find length of a list
(define list-length
  (lambda (lst)
    (if (null? lst)
	0
	(+ 1 list-length (cdr lst))))))
