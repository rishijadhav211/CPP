#include <iostream>
#include <string>

class Address
{
public:
    std::string street;
    std::string city;
    std::string state;

public:
    Address(std::string street, std::string city, std::string state)
        : street(street), city(city), state(state) {}

    // Deep copy constructor
    Address(const Address &other)
        : street(other.street), city(other.city), state(other.state) {}

    // Getters and setters
    std::string getStreet() const { return street; }
    std::string getCity() const { return city; }
    std::string getState() const { return state; }
};

class Person
{
private:
    std::string name;
    int age;
    Address *address;

public:
    Person(std::string name, int age, Address *address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    // Deep copy constructor
    Person(const Person &other)
    {
        name = other.name;
        age = other.age;
        address = new Address(*other.address);
    }

    // Destructor
    ~Person() { delete address; }

    // Getters and setters
    std::string getName() const { return name; }
    int getAge() const { return age; }
    Address *getAddress() const { return address; }
};

int main()
{
    Address *address = new Address("123 Main St", "Anytown", "CA");
    Person *person1 = new Person("John Smith", 30, address);
    Person *person2 = new Person(*person1); // Deep copy of person1

    // Change the street name in person1's address
    person1->getAddress()->street = "456 Elm St";
    std::cout << person1->getAddress()->getStreet() << std::endl;

    std::cout << person2->getAddress()->getStreet() << std::endl; // Output: "123 Main St"

    delete person1;
    delete person2;
    return 0;
}
