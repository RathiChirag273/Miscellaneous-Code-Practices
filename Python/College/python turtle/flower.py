from turtle import *
speed(0)
pensize(3)
bgcolor('black')
def fleur():
    for i in range(215):
        if i >= 0 and i <= 100:
            color('pink')
            circle(190-i,90)
            left(90)
            circle(190-i,90)
            left(18)
        elif i >100 and i <= 190:
            color('hot pink')
            circle(190-i,90)
            left(90)
            circle(190-i,90)
            left(18)
        else:
            pensize(4)
            color('deep pink')
            circle(190-i,90)
            left(90)
            circle(190-i,90)
            left(18)

fleur()
mainloop()
