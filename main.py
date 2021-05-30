from tkinter import *

root = Tk()
root.title("First program")
root.geometry("400x400")

#create Labels

my_label = Label(root, text="Hello world", fg="Yellow", bg="red", font=("forte",40))
my_label.pack()

my_label2 = Label(root,text="First line")
my_label2.pack()


root.mainloop()