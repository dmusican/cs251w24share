def remove_first_good(lst):
    result = lst[:len(lst)-1]
    return result



# With side effects (sometimes considered bad)
def remove_first(lst):
    lst.pop()

items = [5, 6, 7]
print(items)
remove_first(items)
print(items)

others = [1, 2, 3]
print(others)
answer = remove_first_good(others)
print(others)
print(answer)
