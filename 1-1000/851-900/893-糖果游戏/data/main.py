# -*- coding: utf-8 -*-
# 公众号：黑猫编程
# 淘宝店铺：黑猫编程
# 网址：https://noi.blackcat1995.com

from cyaron import *

for k in range(1, 11):

    test_data = IO(file_prefix="", data_id=k)

    a = randint(1, 100)
    b = randint(1, 100)
    c = randint(1, 100)
    d = randint(1, 100)
    e = randint(1, 100)
    test_data.input_writeln(a, b, c, d, e)

    test_data.output_gen("demo.exe")