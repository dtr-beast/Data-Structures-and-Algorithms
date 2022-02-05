def calculateLargePow(base ,exponent):
    res = 1
    while exponent > 0:
        if exponent % 2 == 1:
            res = (res * base) % 1000000007
        exponent = exponent // 2
        base = (base * base) % 1000000007
    return res

a = 1
b = 15
c = 1000000007
print(((a%c)*calculateLargePow((b),c-2)%c)%c)