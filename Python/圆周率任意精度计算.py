#-*- coding:utf-8 -*-
import decimal #精确计算模块
from decimal import * 
 
prec = 2000
getcontext( ).prec = prec + 1 #有效位(包括整数部分) + 最后估算一位
 
# 高斯-勒让德算法
a = Decimal( 1 )
b = Decimal( 1 ) / ( Decimal( 2 ) ** Decimal( 0.5 ) )
t = Decimal( 1 ) / Decimal( 4 )
p = Decimal( 1 )
PIO = 0 # 预设PI上次值
PI = 3 # 预设PI本次值
n = 0 # 计算循环次数

while PIO != PI: # 两次计算结果相等时,不再进行重复计算
    PIO = PI
    aa = a # aa为上一次a值
    a = ( a + b ) / Decimal( 2 )
    b = ( aa * b ) ** Decimal( 0.5 ) # 所有开根,使用乘方代替,https://docs.python.org/2/library/decimal.html
    t = t - p * ( aa - a ) ** 2
    p = Decimal( 2 ) * p
    PI = ( ( a + b ) ** 2 ) / ( Decimal( 4 ) * t )
 
    n+=1
 
print( str( prec ) + "\t" + str( PI ) )