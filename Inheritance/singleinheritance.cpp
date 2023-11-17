#include <bits/stdc++.h>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    // Constructor:
    Person(string str, int n)
    {
        name = str;
        age = n;
    };

    // Default Constructor
    Person() {}

    // Access methods
    int getAge(void) const { return age; }
    void setAge(int n) { age = n; }

    const string &getName() const { return name; }

    virtual void display()
    {
        cout << "The Name of Person is " << name << " and age is " << age << ".\n";
    }
};

// Derived Class
class Student : public Person
{
private:
    string standard;
    float grades;

public:
    // Constructor:
    Student(string strName, int age, string std) : Person(strName, age)
    {
        standard = std;
    }

    // Default Constructor
    Student() {}

    // Access Methods
    const string &getStandard() const { return standard; }
    void setStandard(const string std) { standard = std; }

    float getGrades() const { return grades; }
    void setGrades(float g) { grades = g; }

    // Overloaded Function
    void display()
    {
        cout << "The Student " << getName() << " is in " << standard << " with current grade " << grades << ".\n";
    }
};

int compareAge(Person &p1, Person &p2)
{
    if (p1.getAge() > p2.getAge())
        return 1;
    else if (p1.getAge() < p2.getAge())
        return -1;
    else
        return 0;
}
int main()
{
    Student ss;
    ss.display();
    Student s1("XYZ", 19, "UnderGraduate");
    Person p1("ABC", 23);

    // Student *s3 = p1;

    Student *s = new Student("rj", 22, "udegraduate");
    Student *s34 = new Student();
    s34->display();
    s->setGrades(90);
    s->display();

    Person *p = new Student("XYZ", 19, "UnderGraduate");

    p->display();

    int result = compareAge(p1, s1);
    if (result == -1)
        cout << s1.getName() << " is Elder.";
    else if (result == 1)
        cout << p1.getName() << " is Elder.";
    else
        cout << p1.getName() << " and " << s1.getName() << " both are of Same Age.";
}
