
#ifndef UNTITLED1_LAB4_REPO_H
#define UNTITLED1_LAB4_REPO_H

#ifndef REPO_H
#define REPO_H
#include "entitate.h"
using namespace std;
class Repo{
private:
    Entitate patrate[10];
    int noEntitati;
public:
    Repo();
    ~Repo();
    void addItem(Entitate &s);
    Entitate getItemFromPos(int pos);
    int getSize();
};
#endif

#endif //UNTITLED1_LAB4_REPO_H
