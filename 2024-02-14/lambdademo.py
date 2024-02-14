items = [('horse', 9), ('cow', 3), ('zebra', 1)]
print(sorted(items,
             key=(lambda (lst) (car (cdr lst)))))





#             key=(lambda (lst) (car (cdr lst)))))
