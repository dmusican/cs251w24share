inpfile = open('welcome.greet', 'r')
outfile = open('welcome.bash', 'w')

for line in inpfile:
    (command, number) = line.split()
    outfile.write('for i in {1..' + number + '}\n')
    outfile.write('do\n')
    outfile.write('  echo "' + command + '"\n')
    outfile.write('done\n')

inpfile.close()
outfile.close()
