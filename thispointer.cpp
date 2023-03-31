// #include <iostream>

// using namespace std;

// /*
//  * Class - Employee
//  * data members - name, age, salary
//  * class methods - incrementSalary, display
//  */
// class Employee
// {
// private:
//     // Private data members.
//     string name;
//     double salary;
//     int age;

// public:
//     Employee(string n, int a, double s)
//     {
//         // Class constructor.
//         name = n;
//         age = a;
//         salary = s;
//     }

//     void incrementSalary(double percentage)
//     {
//         // Current salary of an employee is this->salary.
//         int current_salary = salary;
//         int increment_amount = current_salary * (percentage / 100);
//         // Update the salary using this pointer.
//         salary = current_salary + increment_amount;
//     }

//     void display()
//     {
//         // Display values of data members using this pointer.
//         cout << "Employee Name: " << name << endl;
//         cout << "Employee Age: " << age << endl;
//         cout << "Employee Salary: " << salary << endl;
//     }
// };

// int main()
// {
//     // Create two objects emp_1 and emp_2 of class Employee.
//     Employee emp_1 = Employee("Scaler", 22, 10000);
//     Employee emp_2 = Employee("Topics", 23, 10000);

//     int percentage_increment = 10; // 10%
//     // Increment salary of employee 1.
//     emp_1.incrementSalary(percentage_increment);

//     // Display values of data members of objects of class Employee.
//     emp_1.display();
//     cout << "------\n";
//     emp_2.display();

//     return 0;
// }

#include <iostream>

using namespace std;

class Coordinate
{
private:
    int x;
    int y;

public:
    Coordinate(int a, int b)
    {
        // Using this pointer inside the constructor
        // to set values in data members.
        x = a;
        y = b;
    }
    void printCoordinate()
    {
        cout << "(x, y) = (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    // Passing x and y coordinate in the constructor.
    Coordinate pointA(2, 3), pointB(5, 6);

    // Pointing the coordinates.
    pointA.printCoordinate();
    pointB.printCoordinate();

    return 0;
}
