class person(object):
    
    def __init__(self, name='John Doe', year='1990'):
        self._name = str(name)
        self._year = str(year)
        return

    def __repr__(self):
        return '_________Person__________\n  name: ' + self._name + '\n  born: ' + self._year 

    def getName(self):
        return self._name

    def getBirthYear(self):
        return self._year

class student(person):

    def __init__(self, name, year, major='basket weaving', gpa='2.0'):
        super(student,self).__init__(name,year)
        self._major = str(major)
        self._gpa = str(gpa)
        return

    def __repr__(self):
        return '\n_________Student__________\n  name: ' + self._name + '\n  born: ' + self._year + '\n  major: ' + self._major + '\n  gpa: ' + self._gpa

    def getMajor(self):
        return self._major

    def setMajor(self, major):
        self._major = major
        return

    def getGPA(self):
        return self._gpa

    def setGPA(self, gpa):
        self._gpa = gpa
        return

class instructor(person):
    
    def __init__(self, name, year, salary='$30,000'):
        super(instructor,self).__init__(name,year)
        self._salary = salary
        return

    def __repr__(self):
        return '\n_________Instructor__________\n  name: ' + self._name + '\n  born: ' + self._year + '\n  salary: ' + self._salary 
    
    def getSalary(self):
        return self._salary

    def setSalary(self, salary):
        self._salary = str(salary)
        return

if __name__ == '__main__':
    me = student('Nathan Schomer', 1994, 'Engineering', 4.0)
    teacher = instructor('Dr. Shack', 1980, '$98,000') 
    print me
    print teacher
    print ''
