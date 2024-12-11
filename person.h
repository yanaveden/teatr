#pragma once
#include <string>
using namespace std;

class Person
{
public:
    Person(string firstName, string surName);
    Person();

    virtual ~Person();

    string getFirstName();
    string getSurname();

    void setFirstName(string firstName);
    void setSurname(string surName);

    virtual void showInfo() = 0;

private:
    string _firstName; 
    string _surName;
};

// --------------------------------------
class Worker :  public Person
{
public:
    Worker(string firstName, string surName, double salary);
    Worker();

    ~Worker();

    void setSinger(string singer);
    void setDuration(int duration);

    double getSalary();
    void setSalary(double salary);

    void showInfo();

private:
    double _salary; 
};

// --------------------------------------
class Client : public Person
{
public:
    Client(string firstName, string surName, int id);
    Client();

    ~Client();

    int getId();
    void setId(int id);

    void showInfo();

private:
    int _id;
};
