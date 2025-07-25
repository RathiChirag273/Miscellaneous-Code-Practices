import turtle
turtle.bgcolor('black')
turtle.pensize(1)
turtle.speed(18)
for i in range(36):
    for colors in ['gold']: #'red','magenta','blue','cyan','green','yellow',
        turtle.color(colors)
        turtle.circle(100)
        turtle.left(10)
turtle.hideturtle()
input()
