# -*- coding: utf-8 -*-
# 公众号：和黑猫学编程
# 黑猫OJ：http://www.blackcat1995.com

a, b, c = [int(i) for i in input().split()]

if a + b > c and a + c > b and b + c > a:
    print("yes")
else:
    print("no")


