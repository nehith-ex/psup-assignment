char = input("Enter a character: ")
if ('a' <= char.lower() <= 'z'):
    print("Alphabet")
elif '0' <= char <= '9':
    print("Digit")
else:
    print("Special character")
