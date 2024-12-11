#pragma once
#include <string>
using namespace std;

class Show
{
public:
    Show(string title);
    Show();

    virtual ~Show();

    void setTitle(string title);
    string getTitle();

    virtual void showInfo() = 0;

private:
    string _title;
};

// --------------------------------------
class Concert : virtual public Show
{
public:
    Concert(string title, string singer, int duration);
    Concert(string singer, int duration);
    Concert();

    ~Concert();

    void setSinger(string singer);
    void setDuration(int duration);

    string getSinger();
    int getDuration();

    void showInfo();

private:
    string _singer;
    int _duration; // Продолжительность в минутах
};

// --------------------------------------
class Play : virtual public Show
{
public:
    Play(string title, string actor, int numberOfActs);
    Play(string actor, int numberOfActs);
    Play();

    ~Play();

    void setActor(string actor);
    void setNumberOfActs(int numberOfActs);

    string getActor();
    int getNumberOfActs();

    void showInfo();

private:
    string _actor; 
    int _numberOfActs; // Количество актов
};

// --------------------------------------
class Opera : public Concert, public Play
{
public:
    Opera(string title, string singer, int duration, string actor, 
    int numberOfActs, string composer);
    Opera();

    ~Opera();

    void setComposer (string composer);
    string getComposer();

    void showInfo();

private:
    string _composer; // Композитор
};
