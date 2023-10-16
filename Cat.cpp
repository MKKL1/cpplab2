//
// Created by krystian on 16.10.2023.
//

#include "Cat.h"


Cat::Cat(int limbNr, string name, bool isProtected)
{
    this->limbNr = limbNr;
    this->nazwa = name;
    this->animalProtected = isProtected;
}

Cat::Cat()
{

}

void Cat::initMice(int* mouses)
{
    for (int i = 0; i < 5; i++)
    {
        mice[i] = mouses[i];
    }
}

void Cat::setLevelOfMouseHunting(int value)
{
    if (value > 10 || value < 1)
    {
        cout << "Niepoprawna wartosc" << endl;
    }
    else {
        levelOfMouseHunting = value;
    }

}

int Cat::getLevelOfMouseHunting()
{
    return levelOfMouseHunting;
}

int Cat::getMice(int index)
{
    return mice[index];
}

void Cat::getVoice()
{
    cout << "Miau miau!" << endl;
}

void Cat::info()
{
    cout << "Liczba konczyn: " << limbNr << " Nazwa: " << nazwa << " jest chroniony: " << animalProtected <<
         " umiejetnosci polowania: " << levelOfMouseHunting << endl;
}