#include "repo.h"
Repo::Repo(){
    this->noEntitati = 0;
}
Repo::~Repo(){}
void Repo::addItem(Entitate &s){
    this->patrate[this->noEntitati++] = s;
}
Entitate Repo::getItemFromPos(int pos){
    return this->patrate[pos];
}
int Repo::getSize(){
    return this->noEntitati;
}