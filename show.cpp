#include "show.h"
#include <iostream>

Show::Show(string title) : _title(title) {}

Show::Show() : Show("Untitled") {}

Show::~Show() {}

void Show::setTitle(string title) {
    this->_title = title;
}

string Show::getTitle() {
    return _title;
}

void Show::showInfo() {
    cout << "Title: " << _title << endl;
}

// --------------------------------------

Concert::Concert(string title, string singer, int duration) 
    : Show(title), _singer(singer), _duration(duration) {}

Concert::Concert(string singer, int duration) 
    : _singer(singer), _duration(duration) {}

Concert::Concert() : Concert("Untitled", "Unknown", 0) {}

Concert::~Concert() {}

void Concert::setSinger(string singer) {
    this->_singer = singer;
}

void Concert::setDuration(int duration) {
    this->_duration = duration;
}

string Concert::getSinger() {
    return _singer;
}

int Concert::getDuration() {
    return _duration;
}

void Concert::showInfo() {
    Show::showInfo();
    cout << "Singer: " << _singer << endl << "Duration: " << _duration << " minutes." << std::endl;
}
// --------------------------------------

Play::Play(string title, string actor, int numberOfActs) 
    : Show(title), _actor(actor), _numberOfActs(numberOfActs) {}

Play::Play(string actor, int numberOfActs) 
    : _actor(actor), _numberOfActs(numberOfActs) {}

Play::Play() : Play("Untitled", "Unknown", 0) {}

Play::~Play() {}

void Play::setActor(string actor) {
    this->_actor = actor;
}

void Play::setNumberOfActs(int numberOfActs) {
    this->_numberOfActs = numberOfActs;
}

string Play::getActor() {
    return _actor;
}

int Play::getNumberOfActs() {
    return _numberOfActs;
}

void Play::showInfo() {
    Show::showInfo();
    cout << "Actor: " << _actor << endl <<" Number of Acts: " << _numberOfActs<< "." << std::endl;
}

// --------------------------------------

Opera::Opera(string title, string singer, int duration, string actor,
        int numberOfActs, string composer)
        : Show(title), Concert(title, singer, duration), Play(title, actor, numberOfActs),
        _composer(composer) {}

Opera::Opera() :  Opera("Untitled", "Unknown", 0, "Unknown", 0, "Unknown") {}

Opera::~Opera() {}

void Opera::setComposer(string composer) {
    this->_composer = composer;
}

string Opera::getComposer() {
    return _composer;
}


void Opera::showInfo() {
    Concert::showInfo();
    Play::showInfo();

    cout << "Opera composed by: " << _composer << "." << std::endl;
}
