sunny = "sunny"
str = input("How is the World?\n")
if not str.split(): 
    print(f"Hello {sunny} World!")
else:
    print(f"Hello {str} and {sunny} World!")      
