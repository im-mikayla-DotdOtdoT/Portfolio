#include <iostream>
using namespace std;

// class w/attributes for genres
class Genres
{
public:
    string genre;       // attribute for genre
    string typeOfMedia; // attribute for media type
    int year;    // attribute for release year
};

int main()
{
    // object 1
    Genres Obj1;
    Obj1.genre = "Drama/Comedy";
    Obj1.typeOfMedia = "Movie";
    Obj1.year = 2001;

    // object 2
    Genres Obj2;
    Obj2.genre = "Action/Platformer";
    Obj2.typeOfMedia = "Video Game";
    Obj2.year = 2012;

    // object 3
    Genres Obj3;
    Obj3.genre = "Horror";
    Obj3.typeOfMedia = "Book";
    Obj3.year = 1994;

    // display
    cout << "List of 3 types of media, genre, and release year: \n";
    cout << Obj1.genre << ", " << Obj1.typeOfMedia << ", " << Obj1.year << ".\n";
    cout << Obj2.genre << ", " << Obj2.typeOfMedia << ", " << Obj2.year << ".\n";
    cout << Obj3.genre << ", " << Obj3.typeOfMedia << ", " << Obj3.year << ".\n";
}

