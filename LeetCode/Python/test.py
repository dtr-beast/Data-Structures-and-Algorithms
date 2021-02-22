import sys
# print(sys.getrecursionlimit())
sys.setrecursionlimit(100000)

def powerLin(x, n):
    if n == 0:
        return 1
    
    return x * powerLin(x, n - 1)

powerLin(2, 1000)