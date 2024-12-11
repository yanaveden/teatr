#pragma once
#include <string>
#include <iostream>
#include "person.h"
using namespace std;

class Session {
public:
    Session(string title, string genre, string venue);
    Session();

    ~Session();

    void setTitle( string title);
    void setGenre( string genre);
    void setVenue( string venue);

    string getTitle();
    string getGenre();
    string getVenue();

    void showInfo();

private:
    string _title;  // Название спектакля
    string _genre;  // Жанр спектакля
    string _venue;  // Место проведения
};

//---------------------------------------------------------

class Ticket : public Client, public Session {
public:
    Ticket(string firstName, string surName, int id, string title, string genre, string venue, string seat,  double price);
    Ticket();

    ~Ticket();

    void setSeat(string seat);
    void setPrice(double price);

    string getSeat();
    double getPrice();

    void showInfo() ;

private:
    string _seat;       // Место
    double _price;      // Цена билета
};
