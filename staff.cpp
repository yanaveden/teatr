#include "staff.h"

Singer::Singer(string firstName, string surName, double salary, string vocalRange)
    : Worker(firstName, surName, salary), _vocalRange(vocalRange) {}

Singer::Singer() : Singer("Undefined", "Undefined", 0.0, "Unknown") {}

Singer::~Singer() {}

void Singer::setVocalRange(string vocalRange) {
    this->_vocalRange = vocalRange;
}

string Singer::getVocalRange() {
    return _vocalRange;
}

void Singer::showInfo() {
    Worker::showInfo();
    cout << "Vocal Range: " << _vocalRange << endl;
}

//-----------------------------------------------------------

Actor::Actor(string firstName, string surName, double salary, string experience)
    : Worker(firstName, surName, salary), _experience(experience) {}

Actor::Actor() : Actor("Undefined", "Undefined", 0.0, "Unknown") {}

Actor::~Actor() {}

void Actor::setExperience(string experience) {
    this->_experience = experience;
}

string Actor::getExperience() {
    return _experience;
}

void Actor::showInfo() {
    Worker::showInfo();
    cout << "Experience: " << _experience << endl;
}
