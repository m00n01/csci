import time
import os
from  tkinter import *

clear = lambda: os.system('cls')

root = Tk()
root.title("My First GUI")
root.geometry('300x200')

root.mainloop()

print("Code Ninjas Assessment!")

time.sleep(5)

clear()

print("1/5 What is a variable?")
print("I. A piece of information held by a computer\nII. A computer part\nIII. A different name for a mouse")
answer = input()

if (answer != "I"):
	print("Your placement: White Belt!")

time.sleep(0.5)

print("Thank you for choosing Code Ninjas!")