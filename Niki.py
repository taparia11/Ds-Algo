"""
print("NIKHIL",end=" ")
print("TAPARIA")
print("new\\nline")
"""
"""var1="Ram"
var2=55
var3=15
var4="RAJA "
print(5*( var4+var1))
"""

# mys=input()
# print(len(mys))
# var1=int(input())
# print(mys[::2])
# print(mys.endswith("boy"))

# print(mys.replace("good","Exelent"))
# d1={"first":"NIKHIL TAPARIA","sesond":"AVIK","3":{"1":"pratyusha","2":"jobby"}}
# my=input()
# # print(d1[my])
# a1=int(input())
# # a2=int(input())
# if 18>a1:
#     print("you can not drive")
# elif 18==a1:
#     print("come to office")
# else:
#     print("you can drive")

# lis = ["nikhil","ram"]
# for ll in lis:
#     print(ll)
# if(r>10):
#     print(pr)


# lis=[5,6,7,8,9]
# while(True)
# va=int(input())
# if va not in lis:
#     print("YES")
# else:
#     print("NO")
# v=int(input())
# i=v-1
# s=int
# while(i>0):
#     v=v*i
#     i=i-1
# print(v)
# def gcd(m,n):
#     fm=[]
#     for i in range(1,m+1):
#         if (m%i)==0:
#             fm.append(i)
#     fn=[]
#     for j in range(1,n+1):
#         if (n%j)==0:
#          fn.append(j)
#     cf=[]
#     for f in fm:
#         if f in fn:
#             cf.append(f)
#     return(cf[-1])
#
# m=int(input('Enter First Number = '))
# n=int(input('Enter Sesond Number = '))
# p=int(gcd(m,n))
# print(p)
# x=int(input())
# y=int(input())
# print("X is big") if x>y else print("Y is big")
# a=5
# b=7
# a,b=b,a
# print(a,b)
#
# a=input('Enter num 1 = ')
# b=input('Enter num 2 = ')
# try:
#     print(int(a)+int(b))
# except Exception as e:
#     print(e)
#
# print('TAAPRIA')

# f = open("nikhil.txt")
# data = f.read()
# print(data)
# f.close()

# a=[1,2,3,4,5]
# print(a.)
#
# def mystery(l):
#   l[0:2] = l[3:5]
#   return()
#
# list1 = [34,17,12,88,53,97,62]
# y=mystery(list1)
# print(y)

#file = open("nikhil.txt", "r")
#for i in range(21):
 # print(file.read(4))
#file.close()
#
# def reverse_vowels(str1):
# 	vowels = ""
# 	for char in str1:
# 		if char in "aeiouAEIOU":
# 			vowels += char
# 	result_string = ""
# 	for char in str1:
# 		if char in "aeiouAEIOU":
# 			result_string += vowels[-1]
# 			vowels = vowels[:-1]
# 		else:
# 			result_string += char
# 	return result_string
#
# var = input()
# print(reverse_vowels(var))
#
# hex_values = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E', 'F']
#
# # User enters a positve integer that will be stored into the variable n
# n = int(input("input any positive integer number"))
#
# # creates an empty variable called inverse
# inverse = ""
#
# # while loop that only runs when n is larger than 0.
# # As soon as n is less than or equal to 0. It stops looping and prints
# while n > 0:
# 	# uses the mod function to find the remainder of dividing by 16.
# 	# This gives the last digit of the hexadeximal number
# 	remainder = n % 16
#
# 	# subtract the remainder away from the original number n to get the number that fully divides by 16
# 	n -= remainder
#
# 	# divides by 16 wholey
# 	n //= 16
#
# 	# appends inverse
# 	# remainder and the list number in the list hex_value are coherent and correspond with eachother
# 	# therefore it returns the hexadecimal equivalent
# 	inverse += str(hex_values[remainder])
# print('0x', end='')
# print(inverse[::-1])

var = 9//5
print(var)
