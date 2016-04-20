#!/usr/bin/python

class CharCounter(object):
    
    def __init__(self, filename, strLen):
        #self._words = [word.strip('.').strip(')') for word in line for line in open(filename, 'r') if len(word.strip('.').strip(')'))]
        
        lines = []
        words = []
        
        [lines.append(line) for line in open(filename,'r')]
       
        for line in lines:
            for word in line.split():
                tmpWord = word.strip('().,')
                if len(tmpWord) is strLen:
                    words.append(tmpWord)
       
        self._words = words
        self._idx = 0
        return

    def __iter__(self):
        return self

    def next(self):
        try:
            ret = self._words[self._idx]
        except IndexError:
            raise StopIteration

        self._idx += 1    
        return ret


if __name__ == "__main__":
    for word in CharCounter('agency.txt', 11):
        print "'%s'" % word
