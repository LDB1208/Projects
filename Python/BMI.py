w = float(input("��������������(kg):"))
h = float(input("�������������(m):"))
BMI = w / h ** 2
print("����BMIֵΪ:", BMI)
if 18.5 <= BMI <= 23.9:
    print("����")
elif BMI < 18.5:
    print("ƫ��")
else:
    print("ƫ��")
