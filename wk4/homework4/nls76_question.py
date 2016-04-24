#!/usr/bin/python

class Question(object):
    
    def __init__(self, question=None, answer=None):
        self._question = question
        self._answer = answer

    def setText(self, question):
        self._question = question

    def setAnswer(self, answer):
        self._answer = answer

    def __iter__(self):
        yield self._question

    def checkAnswer(self, answer):
        return self._answer == answer

class ChoiceQuestion(Question):

    def __init__(self, question=None, answer=None):
        super(ChoiceQuestion, self).__init__(question, answer)
        self._question = question
        self._answer = answer

    def addChoice(self, choiceText, isAnswer):
        self._question.append(choiceText)
        if isAnswer is True:
            self._answer = len(self._question)
   
    def __iter__(self):
        for idx, choice in enumerate(self._question):
            if idx is 0:
                yield choice
            else:
                yield str(idx) + '. ' + choice

    def checkAnswer(self, answer):
        return str(answer) == str(self._answer)

def presentQuestion(question):
    
    for line in question:
        print line

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
    
