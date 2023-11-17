/////////this code will not give deep copy as no pointers useeee

#include <iostream>
using namespace std;
class Address
{
public:
    string add;
};
class Employee
{
private:
    // Data members
    int salary, experience;
    Address A;

public:
    Employee()
    {
        cout << "default";
    }
    // Parameterized constructor
    Employee(int x1, int y1, string add)
    {

        salary = x1;
        experience = y1;
        A.add = add;
    }

    // Copy constructor
    Employee(const Employee &new_employee)
    {
        salary = new_employee.salary;
        experience = new_employee.experience;
        A.add = new_employee.A.add;
    }
    void changeadd(string ch, int sal)
    {
        A.add = ch;
        salary = sal;
    }
    void display()
    {
        cout << "Salary: " << salary << endl;
        cout << "Years of experience: " << experience << endl;
        cout << "address : " << A.add;
    }
};

// main function
int main()
{
    // Parameterized constructor
    Employee employee1(34000, 992, "sangli");
    // Copy constructor
    Employee employee2 = employee1;
    employee2.changeadd("pune", 34343);
    cout << "Employee1 using parameterized constructor : \n";
    employee1.display();
    cout << "Employee2 using copy constructor : \n";
    employee2.display();
    cout << "\nthis code will not need deep copy as no pointers useeee";
    return 0;
}
