import turtle

class Spirograph:
    """
    Spirograph class
    """

    def __init__(self, R):
        """
        Create new spirograph with outer radius R 
        """
        self._R = R
        self._r = None
        self._l = None
        self._color = None
        
        self._canvas = turtle()
        return

    def setSmallCircle(self, r):
        """
        Set radius of the small circle used to draw
        """
        return

    def setPen(self, l, color):
        """
        Set color of pen and distance from C
        """
        return

    def draw(self):
        """
        Draw spirograph using the current small circle and pen settings
        """
        return

    def clear(self):
        """
        Reset the drawing surface
        """
        return
