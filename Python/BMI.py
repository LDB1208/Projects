w = float(input("��������������(kg):"))
h = float(input("�������������(m):"))
BMI = w / h ** 2
print("����BMIֵΪ:", BMI)
if 20 <= BMI <= 24:
    print("����")
elif BMI < 20:
    print("ƫ��")
else:
    print("ƫ��")
