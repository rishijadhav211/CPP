#include <iostream>

class ClassA;

class ClassB
{
private:
    int bVal;

public:
    ClassB(int val) : bVal(val) {}
    friend void printVals(ClassA &, ClassB &);
};

class ClassA
{
private:
    int aVal;

public:
    ClassA(int val) : aVal(val) {}
    friend void printVals(ClassA &, ClassB &);
};

void printVals(ClassA &a, ClassB &b)
{
    std::cout << "Values: " << a.aVal << " and " << b.bVal << std::endl;
}

int main()
{
    ClassA a(5);
    ClassB b(10);
    printVals(a, b);
    return 0;
}
