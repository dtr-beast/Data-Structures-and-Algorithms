# # # import sys
# # # # print(sys.getrecursionlimit())
# # # sys.setrecursionlimit(100000)

# # # def powerLin(x, n):
# # #     if n == 0:
# # #         return 1
    
# # #     return x * powerLin(x, n - 1)

# # # powerLin(2, 1000)

# # # inverts the number as 
# # for i in range(10):
# #     print(i, end= ' ')

# # print()

# for i in range(10):
#     print(~i, end= ' ')
    
# lst = []
# c = 1
# for i in range(6):
#     temp_list = []
#     for j in range(6):
#         temp_list.append(c)
#         c += 1
    
#     lst.append(temp_list)

# lst.append(None)
# print(lst)
# # [[1, 2, 3, 4, 5, 6], [7, 8, 9, 10, 11, 12], [13, 14, 15, 16, 17, 18], [19, 20, 21, 22, 23, 24], [25, 26, 27, 28, 29, 30], [31, 32, 33, 34, 35, 36]]
# # [1, 2, 3, 4, 5, 6, 12, 18, 24, 30, 36, 35, 34, 33, 32, 31, 25, 19, 13, 7]
# func =  [lambda x: x[0] - 1, lambda x: x + 1]
# x = [0, 1]
# print(func[0](x))
# print(x)
# m = [[1, 2, 3, 4, 5, 6], [7, 8, 9, 10, 11, 12], [13, 14, 15, 16, 17, 18], [19, 20, 21, 22, 23, 24], [25, 26, 27, 28, 29, 30], [31, 32, 33, 34, 35, 36]]
# for i in range(6):
#     for j in range(6):
#         print(m[i][j], end=" ")
#     print()

# """
# 1  2  3  4  5  6 
# 7  8  9  10 11 12 
# 13 14 15 16 17 18
# 19 20 21 22 23 24
# 25 26 27 28 29 30
# 31 32 33 34 35 36
# """

# lst = []
# lst.append(1)
# lst.append(2)
# lst.append(3)
# print(lst)