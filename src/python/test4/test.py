from getkey import getkey

print("The World is running, press escape to exit?")
while True:
    key = getkey()
    if ord(key) == 27:
        print("ESC key pressed, exit!")
        break
    else:
        print(f"Key pressed = {key} ")
