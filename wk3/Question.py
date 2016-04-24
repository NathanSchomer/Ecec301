#!/usr/bin/python

class Question(object):
    
    def __init__(self, question=None, answer=None):
        self._question = question
        self._answer = answer
        return

    def setText(self, question):
        self._question = question
        return

    def setAnswer(self, answer):
        self._answer = answer
        return

    def display(self):
        print self._question
        return

    def checkAnswer(self, answer):
        return self._answer == answer

class ChoiceQuestion(Question):

    def __init__(self, question=None, answer=None):
        super(ChoiceQuestion, self).__init__(question, answer)
        self._question = question
        self._answer = answer
        return

    def addChoice(self, choiceText, isAnswer):
        self._question.append(choiceText)
        if isAnswer is True:
            self._answer = len(self._question)
        return
    
    def display(self):
        for idx, choice in enumerate(self._question):
            if idx is 0:
                print choice
            else:
                print str(idx) + '. ' + choice
        return

    def checkAnswer(self, answer):
        return str(answer) == str(self._answer)

def presentQuestion(question):
    question.display()
    result = question.checkAnswer(raw_input('Your Answer: '))
    if result is True:
        print 'Correct!\n'
    else:
        print 'Incorrect!\n'

if __name__=='__main__':
    questions = []
    questions.append(Question('What is my favorite color?', 'Yellow'))
    questions.append(Question('What is my favorite animal?', 'Dogs'))
    questions.append(Question('What is my favorite food?', 'Soup'))
    questions.append(ChoiceQuestion(['What is my birthday?', 'August 25', 'Feburary 29', 'September 31'], 1))
    questions.append(ChoiceQuestion(['How old am I?', '36', '88', '21'], 3))

    for question in questions:
        presentQuestion(question)
    
