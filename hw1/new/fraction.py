#!/usr/bin/env python

__author__ = "Nathan Schomer"
__version__ = "1.0.0"
__date__ = "11 April 2016"
__email__ = "nls76@drexel.edu"

class Fraction(object):
    """
    This class will construct a fraction (rational number) using a numerator and denominator specified prior to instantiation of the object.

    Note: The constructor will automatically simplify a given fraction. If the fraction object can be simplified to an integer, the _denom attribute will maintain a value of 1.

    Args: 
        numer (int): numerator of fraction
        demon (int): denominator of fraction

    Attributes:
        _numer (int): private numerator of fraction
        _denom (int): private denominator of fraction
    """
    def __init__(self, numer, denom):
        self._numer = int(numer)
        self._denom = int(denom)
        self._simplify()
        return
    
    def __add__(self, other):
        """ add two fraction objects, return result fraction """
        temp = Fraction(self._numer*other._denom + self._denom*other._numer, self._denom * other._denom) 
        temp._simplify()
        return temp
    
    def __eq__(self, other):
        """ Check if two fraction objects are equal to each other.  """
        if self._numer*other._denom is other._numer*self._denom:
            return True
        else:
            return False
    
    def __lt__(self, other):
        """ Check if a fraction object is less than another. """
        if self._numer*other._denom <  other._numer*self._denom:
            return True
        else:
            return False
    
    def __ne__(self, other):
        """ 
            Check if two fraction objecs are not equal.
            This function returns the inverse of the __eq__ method.    
        """
        return not self.__eq__(other)  
    
    def __le__(self, other):
        """ Check if a fraction object is less than or equal to anotherl.  """
        if self._numer*other._denom <=  other._numer*self._denom:
            return True
        else:
            return False
        return
    
    def __gt__(self, other):
        """ Check if a fraction object is greater than another. """
        if self._numer*other._denom >  other._numer*self._denom:
            return True
        else:
            return False
    
    def __ge__(self, other):
        """ Check if a fraction object is greater than or equal to another  """
        if self._numer*other._denom >=  other._numer*self._denom:
            return True
        else:
            return False
    
    def __float__(self):
        """ Return floating point approximation of fraction instance. """
        return float(self._numer)/self._denom
    
    def __repr__(self):
        """ Return string representation of raction instance. If the denominator is 1, only print the numerator. """
        if self._denom is 1:
            return str(self._numer)
        else:
            return str(self._numer) + '/' + str(self._denom)
    
    def __str__(self):
        """ Allows user to cast fraction objects to strings.  """
        return self.__repr__()
    
    def _simplify(self):
        """ 
            Private function used by class to simplify fraction objects. 
            This method utilizes Euclid's algorithm to calculate the greatest common divisor.
        """
        x = self._denom
        y = self._numer
        if y > x:
            x, y = y, x
        gcd = 0
        rem = y
        while y != 0:
            gcd = rem
            rem = x%y
            x = y
            y = rem
        
        self._numer = self._numer / gcd
        self._denom = self._denom / gcd
        return
