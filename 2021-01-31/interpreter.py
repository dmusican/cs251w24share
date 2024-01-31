inpfile = open('welcome.greet', 'r')

for line in inpfile:
    (command, number) = line.split()
    count = int(number)
    for i in range(count):
        print(command)

inpfile.close()
