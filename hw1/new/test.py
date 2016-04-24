#!/usr/bin/python

from fraction import Fraction

if __name__ == '__main__':
    #fraction objects for testing
    rational1 = Fraction(1,2)
    rational2 = Fraction(2,3)
    rational3 = Fraction(9,21)
    rational4 = Fraction(10,2)

    #__repr__
    print '\nFraction objects created for testing:\n' + str(rational1) + "\n" + str(rational2) + "\n" + str(rational3) + "\n" + str(rational4) + "\n"

    #add
    print str(rational1) + ' + ' + str(rational1) + ' = ' + str(rational1 + rational1)
    print str(rational1) + ' + ' + str(rational2) + ' = ' + str(rational1 + rational2)
    print str(rational3) + ' + ' + str(rational4) + ' = ' + str(rational3 + rational4)
    print ""

    #equal
    print str(rational1) + ' == ' + str(rational1) + ' is ' + str(rational1 == rational1)
    print str(rational1) + ' == ' + str(rational2) + ' is ' + str(rational1 == rational2)
    print ""

    #less than
    print str(rational1) + ' < ' + str(rational1) + ' is ' + str(rational1 < rational1)
    print str(rational1) + ' < ' + str(rational2) + ' is ' + str(rational1 < rational2)
    print str(rational2) + ' < ' + str(rational1) + ' is ' + str(rational2 < rational1)
    print ""

    #not equal
    print str(rational1) + ' != ' + str(rational1) + ' is ' + str(rational1 != rational1)
    print str(rational1) + ' != ' + str(rational2) + ' is ' + str(rational1 != rational2)
    print ""

    #less than or equal
    print str(rational1) + ' <= ' + str(rational1) + ' is ' + str(rational1 <= rational1)
    print str(rational1) + ' <= ' + str(rational2) + ' is ' + str(rational1 <= rational2)
    print str(rational2) + ' <= ' + str(rational1) + ' is ' + str(rational2 <= rational1)
    print ""

    #greater than
    print str(rational1) + ' > ' + str(rational1) + ' is ' + str(rational1 > rational1)
    print str(rational1) + ' > ' + str(rational2) + ' is ' + str(rational1 > rational2)
    print str(rational2) + ' > ' + str(rational1) + ' is ' + str(rational2 > rational1)
    print ""

    #greater than or equal
    print str(rational1) + ' >= ' + str(rational1) + ' is ' + str(rational1 >= rational1)
    print str(rational1) + ' >= ' + str(rational2) + ' is ' + str(rational1 >= rational2)
    print str(rational2) + ' >= ' + str(rational1) + ' is ' + str(rational2 >= rational1)
    print ""

    #cast to float
    print 'Cast ' + str(rational1) + ' to float: ' + str(float(rational1))
    print 'Cast ' + str(rational2) + ' to float: ' + str(float(rational2))
