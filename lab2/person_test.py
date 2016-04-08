import person

if __name__ == '__main__':

    usrInput = ''
    people = []

    promptHeader = '\n'+'_'*20
    prompt1 = promptHeader+'\n1. Create Person\n2. Create Student\n3. Create Instructor\n\nSelect: '
    prompt2 = '\nEdit:\n1. Major \n2. GPA\n\nSelect:'
    prompt3 = '\nEdit:\n1. Salary\n\nSelect:'

    #while usrInput != '4':
    usrInput = int(raw_input(prompt1))
    if 0 < usrInput < 4:
        name = str(raw_input('Name: '))
        year = str(raw_input('Birth Year: '))
    if usrInput is 1:
        me = person.person(name,year)
    elif usrInput is 2:
        major = str(raw_input('Major: '))
        gpa = str(raw_input('GPA: '))
        me = person.student(name,year,major,gpa)
    elif usrInput is 3:
        salary = str(raw_input('Salary: '))
        me = person.instructor(name,year,salary)
    #elif usrInput is 4:
    #    for person in people:
    #        print person
    else:
        print 'INVALID INPUT\n'
        usrInput = 0
    
    while usrInput != 0:
        print me
        if isinstance(me, person.student):
            usrInput = int(raw_input(prompt2))
            if usrInput is 1:
                major = str(raw_input('\nmajor: '))
                me.setMajor(major)
            elif usrInput is 2:
                gpa = str(raw_input('\ngpa: '))        
                me.setGPA(gpa) 
            else:
                'INVALID INPUT\n'
                usrInput = 0
        elif isinstance(me, person.instructor):
            usrInput = int(raw_input(prompt3))
            if usrInput is 1:
                salary = str(raw_input('\nsalary: '))
                me.setSalary(salary)
            else:
                'INVALID INPUT\n'
                usrInput = 0
        else:
            usrInput = 0
