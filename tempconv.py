print("온도변화")
print("="*20)
print("1. 섭씨 --> 화씨")
print("2. 화씨 --> 섭씨")
print("="*20)
def change_temperature():
    a =  int(input("번호를 선택하세요: "))
    if a == 1:
        c = int(input("섭씨를 입력하세요: "))
        f = 9 / 5 * c + 32
        print("섭씨", c, "도는 화씨", f, "도입니다.")
    elif a == 2:
        f = int(input("화씨를 입력하세요: "))
        c = 5 / 9 * (f - 32)
        print("화씨", f, "도는 섭씨", c, "도입니다.")
    else:
        print("잘못 입력하셨습니다. 다시 입력하시오")
        change_temperature()

change_temperature()
