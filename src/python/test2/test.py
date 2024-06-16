from getkey import getkey

print("How is the World? M: Mad, B: Beautiful")
key = getkey()
if key == "M":
    print("Hello Mad World!")
else:
    if key == "B":
        print("Hello Beautiful World!")
    else:
        print("Hello World!")

