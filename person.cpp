#include "person.h"
#include <iostream>

Person::Person(string firstName, string surName) : _firstName(firstName), _surName(surName) {}

Person::Person() : Person("undefined", "undefined") {}

Person::~Person() {}

string Person::getFirstName()
{
    return _firstName;
}

string Person::getSurname()
{
    return _surName;
}

void Person::setFirstName(string firstName)
{
    this->_firstName = firstName;
}

void Person::setSurname(string surName)
{
    this->_surName = surName;
}

void Person::showInfo()
{
    cout  << "Name: " << _firstName  << endl
    << "Surname: " << _surName << endl;
}

// --------------------------------------

Worker::Worker(string firstName, string surName, double salary)
    : Person(firstName, surName), _salary(salary) {}

Worker::Worker() : Worker("undefined", "undefined", 0.0) {}

Worker::~Worker() {}

void Worker::setSalary(double salary)
{
    this->_salary = salary;
}

double Worker::getSalary()
{
    return _salary;
}

void Worker::showInfo()
{
    Person::showInfo();
    cout << "Salary: " << _salary << " r." << endl;
}

// --------------------------------------

Client::Client(string firstName, string surName, int id)
    : Person(firstName, surName), _id(id) {}

Client::Client() : Client("undefined", "undefined", 0) {}

Client::~Client() {}

int Client::getId()
{
    return _id;
}

void Client::setId(int id)
{
    this->_id = id;
}

void Client::showInfo()
{
    Person::showInfo();
    cout << "ID : " << _id << endl;
}
