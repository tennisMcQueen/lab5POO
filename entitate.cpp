#include "entitate.h"
#include <iostream>
#include <string.h>

// Constructor
// Out: an empty object of type Entitate
Entitate::Entitate(){
    this->pct1 = 0;
    this->pct2=0;
    this->pct3 = 0;
    this->pct4=0;
}
// Constructor with parameters

Entitate::Entitate(int a,int b,int c, int d){
    this->pct1 = a;
    this->pct2 = b;
    this->pct3 = c;
    this->pct4 = d;
}
// Copy constructor

Entitate::Entitate(Entitate &a) {
    this->pct1=a.pct1;
    this->pct2=a.pct2;
    this->pct3=a.pct3;
    this->pct4=a.pct4;

}
// Desonstructor

Entitate::~Entitate() {
    this->pct1 = 0;
    this->pct2 = 0;
    this->pct3 = 0;
    this->pct4 = 0;
}

// getter

int Entitate::getPct1() {
    return this->pct1;
}

int Entitate::getPct2() {
    return this->pct2;
}

int Entitate::getPct3() {
    return this->pct3;
}

int Entitate::getPct4() {
    return this->pct4;
}
// setter

void Entitate::setPct1(int lungime1) {
    this->pct1=lungime1;
}

void Entitate::setPct2(int lungime2) {
    this->pct2=lungime2;
}

void Entitate::setPct3(int lungime3) {
    this->pct3=lungime3;
}

void Entitate::setPct4(int lungime4) {
    this->pct4=lungime4;
}
// assignment operator

/*Entitate& Entitate::operator=(const Entitate &s){
    this->setPct1(s.pct1);
    return *this;
}*/
// comparator

/*bool Entitate::operator==(const Entitate &s){
    return ((strcmp(this->name, s.name) == 0) && (this->lungimeL == s.lungimeL));
}*/
