#include "person.h"
#pragma once
#include <string>
#include <iostream>
using namespace std;


class Singer : public Worker {
public:
    Singer(string firstName, string surName, double salary, string vocalRange);
    Singer();

    ~Singer();

    void setVocalRange(string vocalRange);
    string getVocalRange();

    void showInfo();

private:
    string _vocalRange; // Вокальный диапазон
};

//-----------------------------------------------------------

class Actor : public Worker {
public:
    Actor(string firstName, string surName, double salary, string experience);
    Actor();

    ~Actor();

    void setExperience(string experience);
    string getExperience();

    void showInfo();

private:
    string _experience; // Опыт работы
};

