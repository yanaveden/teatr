#include <iostream>
#include "person.h"      
#include "session.h"     
#include "show.h"      
#include "staff.h"     

using namespace std;

int main() {
    Actor actor("John", "Doe", 50000.0, "5 years");
    cout << "Actor Information:" << endl;
    actor.showInfo();
    cout << endl;

    Singer singer("Jane", "Smith", 60000.0, "Soprano");
    cout << "Singer Information:" << endl;
    singer.showInfo();
    cout << endl;

    Opera opera("The Traviata", "Verdi", 120, "John", 5, "Verdi");
    cout << "Opera Information:" << endl;
    opera.showInfo();
    cout << endl;

    Session session("Hamlet", "Drama", "Main Theater");
    cout << "Session Information:" << endl;
    session.showInfo();
    cout << endl;

    Ticket ticket("Alice", "Johnson", 12345, "Hamlet", "Drama", "Main Theater", "Row 2 Seat 5", 1500.0);
    cout << "Ticket Information:" << endl;
    ticket.showInfo();

    return 0;
}
