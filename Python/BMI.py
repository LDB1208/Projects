w = float(input("��������������(kg):"))
h = float(input("�������������(m):"))
BMI = w / h ** 2
print("����BMIֵΪ:", BMI)
if 18 <= BMI <= 25:
    print("����")
elif BMI < 18:
    print("ƫ��")
else:
    print("ƫ��")
