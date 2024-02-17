class Employee:

    num_of_emps = 0
    raise_amt = 1.04

    def __init__(self, first, last, pay,amount=None):
        self.first = first
        self.last = last
        self.email = first + '.' + last + '@email.com'
        self.pay = pay
        self.amount = amount

        Employee.num_of_emps += 1

    def fullname(self):
        return '{} {}'.format(self.first, self.last)

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amt)

    @classmethod
    def set_raise_amt(self,amount):
        self.amount = amount
        self.raise_amt = self.amount

    @classmethod
    def from_string(self, emp_str):
        first, last, pay = emp_str.split('-')
        return cls(first, last, pay)

    @staticmethod
    def is_workday(day):
        if day.weekday() == 5 or day.weekday() == 6:
            return False
        return True


emp_1 = Employee('Corey', 'Schafer', 50000)
emp_2 = Employee('Test', 'Employee', 60000)

emp_2.set_raise_amt(1.57)
emp_1.set_raise_amt(1.99)

print(Employee.raise_amt)
print(emp_1.raise_amt)
print(emp_2.raise_amt)