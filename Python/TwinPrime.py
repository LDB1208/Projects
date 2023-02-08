#定义函数
def prime(a):
	if a <= 1: #小于1不为素数
		return False
	for i in range(2, a): #在2到a-1内枚举
		if a % i == 0: #余数为0不为素数
			return False
			break #跳出循环
	else: #条件不满足为素数
		return True

#主程序
a = int(input("请输入下限:"))
b = int(input("请输入上限:"))
print("该区间的孪生素数对有:")
for p in range(a, b+1): #循环枚举
	for q in range(a, b+1):
		if prime(p) and prime(q) and q - p == 2: #满足条件输出
			print(p, q)
