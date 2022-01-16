"""
汇率转化器
美元——人民币
"""
#1.获取数据
str_usd = input("请输入美元：")
int_usd = int(str_usd)
#2.逻辑处理
result = int_usd*6.9
#3.显示结果
print(result)