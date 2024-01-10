;;; map
;;; used to run a function on every item in a list
(define addOne
  (lambda (x)
    (+ x 1)))

(map addOne '(1 2 3 4 5))

(map (lambda (x) (+ x 1)) '(1 2 3 4 5))

;;; Common task
;;; Add 1 to every item in the list
;;; sum up all the results
;;; second part is the "reduce"
;;; In Scheme, reduce <---> fold

(use-modules ((rnrs)
              #:select (fold-left fold-right)))
(fold-left + 81 '(1 2))

;;; total lengths of all sublists
(define lists '((the fox jumped)
                (the cow mooed)
                (birds)
                (happy cheetahs)))
(define total-length
  (lambda (documents)
     (fold-left + 0 (map length documents))))

(total-length lists)

;;; count number of times a word appears in a list
(define text '(the quick brown fox ate a fox squirrel quick quick))

(define count-word
  (lambda (target words)
         (map (lambda (word)
                (if (equal? target word)
                    1
                    0
                    ))
              words)))


(count-word 'fox text)
