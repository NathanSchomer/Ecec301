#!/usr/bin/python

def CharCounter(filename, strLen):
    lines = []
    words = []

    [lines.append(line) for line in open(filename, 'r')]

    for line in lines:
        for word in line.split():
            tmpWord = word.strip('().,')
            if len(tmpWord) is strLen:
                yield tmpWord

    return

if __name__ == "__main__":
    for word in CharCounter('agency.txt', 11):
        print "'%s'" % word
