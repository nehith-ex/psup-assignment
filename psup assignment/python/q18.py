month = int(input("Enter month number (1-12): "))
year = int(input("Enter year: "))
if month == 2:
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        print("29 days")
    else:
        print("28 days")
elif month in [4, 6, 9, 11]:
    print("30 days")
else:
    print("31 days")