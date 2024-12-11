#include "session.h"

Session::Session( string title,  string genre,  string venue)
    : _title(title), _genre(genre), _venue(venue) {}

Session::Session() : Session("Untitled", "Unknown", "Unknown") {}

Session::~Session() {}

void Session::setTitle( string title) {
    this-> _title = title;
}

void Session::setGenre( string genre) {
    this->_genre = genre;
}

void Session::setVenue( string venue) {
    this->_venue = venue;
}

string Session::getTitle()  {
    return _title;
}

string Session::getGenre()  {
    return _genre;
}

string Session::getVenue()  {
    return _venue;
}

void Session::showInfo() {
    cout << "Play Title: " << _title << "\n"
        << "Genre: " << _genre << "\n"
        << "Venue: " << _venue << endl;
}

//---------------------------------------------------------------------------

Ticket::Ticket(string firstName, string surName, int id, string title, string genre, string venue, string seat, double price)
    : Client(firstName, surName, id), Session(title, genre, venue), _seat(seat), _price(price) {}

Ticket::Ticket() : Ticket("Undefined", "Undefined", 0, "Untitled", "Unknown", "Unknown", "Unknown", 0.0) {}

Ticket::~Ticket() {}

void Ticket::setSeat(string seat) {
    this->_seat = seat;
}

void Ticket::setPrice(double price) {
    this->_price = price;
}

string Ticket::getSeat() {
    return _seat;
}

double Ticket::getPrice() {
    return _price;
}

void Ticket::showInfo() {
    Client::showInfo();
    Session::showInfo();
    cout << "Seat: " << _seat << "\n"
        << "Price: " << _price << " r." << endl;
}
