#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Entitate{
private:
    int pct1;
    int pct2;
    int pct3;
    int pct4;

public:
    Entitate();
    ~Entitate();
    Entitate(int pct1, int pct2, int pct3, int pct4);
    Entitate(Entitate &s);
    int getPct1();
    int getPct2();
    int getPct3();
    int getPct4();
    void setPct1(int a);
    void setPct2(int a);
    void setPct3(int a);
    void setPct4(int a);
};
#endif
