//
// Created by Евгения on 07.10.2026.
//

#ifndef INC_08_10_2026_MOVIEDVD_H
#define INC_08_10_2026_MOVIEDVD_H

#pragma once
#include "MusicCD.h"
class MovieDVD :
    public MusicCD
{
protected:
    string genre;
public:
    MovieDVD();
    MovieDVD(string n, string a, int year, float price, int duration, string genre);
    float getPrice() const;
    void show() const;
};




#endif //INC_08_10_2026_MOVIEDVD_H
