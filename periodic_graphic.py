from tkinter import *

func = Tk()

func.title("Periodic table")
func.geometry("1000x500")
func.configure(bg="#E6E6E6")
      
button1 = Button(func, text="H", command="H")
button1.pack()

mainloop()
