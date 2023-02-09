w = float(input("请输入您的体重(kg):"))
h = float(input("请输入您的身高(m):"))
BMI = w / h ** 2
print("您的BMI值为:", BMI)
if 18.5 <= BMI <= 23.9:
    print("正常")
elif BMI < 18.5:
    print("偏瘦")
else:
    print("偏胖")
