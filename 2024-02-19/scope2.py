x = 3

def fun1():
    print(x)
    x = 4
    global x
    print("fun1", x)

fun1()
print("Done", x)
