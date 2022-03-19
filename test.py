with open("test.txt", 'w') as f:
    f.writelines((str(i) + '\n' for i in range(1, 10000)))
