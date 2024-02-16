items = [('horse', 9), ('cow', 3), ('zebra', 1)]
print(sorted(items,
             key=lambda t: t[1]))

# Add one to every item in a list
items = [9, 2, 1, 3, 5]
new_items = []
for value in items:
    new_items.append(value+1)
print(new_items)
