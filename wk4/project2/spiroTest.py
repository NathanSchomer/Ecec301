
import spirograph

if __name__ == "__main__":
    # Create a new Spirograph toy with R = 500
    my_spirograph = Spirograph(500)
    # Draw one curve
    my_spirograph.setSmallCircle(85)
    my_spirograph.setPen(0.65, ’red’)
    my_spirograph.draw()
    # ...and then draw another on top of the first
    my_spirograph.setSmallCircle(120)
    my_spirograph.setPen(0.22, ’blue’)
    my_spirograph.draw()
    # ...and then get a new sheet of paper
    my_spirograph.clear()
    # ...and draw another
    my_spirograph.setSmallCircle(20)
    my_spirograph.setPen(0.8, ’purple’)
    my_spirograph.draw()
