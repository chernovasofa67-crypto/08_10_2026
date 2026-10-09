//
// Created by Евгения on 07.10.2026.
//

#include "MovieDVD.h"
MovieDVD::MovieDVD()
{ //MusicCD()
    genre = "undefine";
}

MovieDVD::MovieDVD(string n, string a, int year, float price, int duration, string genre)
:MusicCD(n,a,year,price,duration)
{
    this->genre = genre;
}
float MovieDVD::getPrice() const
{
    if (genre == "comedy")
    {
        return price * 0.9;
    }
    else if (genre == "drama")
    {
        return price * 0.85;
    }
    else if (genre == "serial")
    {
        return price * 0.8;
    }
    else
    {
        return price;
    }
}
void MovieDVD::show() const
{
    cout << "\t MovieDVD \n";
    Item::show();
    cout << "duration" << duration << endl;
    cout << "genre" << genre << endl;
    cout << "full price" << getPrice() << endl << endl;
}

