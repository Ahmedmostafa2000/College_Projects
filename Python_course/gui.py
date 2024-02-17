from tkinter import *

def hello():
	print('hello')

app = Tk()
title = Label(text = 'Hi')
title.pack()

#frame
f = Frame(width = 600,height = 600 )

#button
button = Button(f,text = 'Bye',command = quit,width=20)
button.config(bg = 'white')
button.bind('<Button-1>',hello())
#button.bind('<Double-1>',quit())
button.pack(side = LEFT)

#Entry
e = Entry(f)
e.pack()
#import sys;sys.exit()
f.pack()
mainloop()