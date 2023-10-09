//
// Created by student on 09.10.2023.
//

#include "Animal.h"

Animal::Animal() {}

Animal::Animal(int limbNr, const string &nazwa, bool animalProtected = true) : limbNr(limbNr), nazwa(nazwa),
                                                                        animalProtected(animalProtected) {}


void Animal::giveVoice() {
}
