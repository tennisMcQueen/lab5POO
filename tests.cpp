#include "tests.h"
#include "operations.h"
#include <cassert>
#include <iostream>

using namespace std;

void testEntitate(){
    Entitate p1( 1,2,1,2);
    Entitate p2( 5,1,5,1);
    Entitate p3( 2,7,2,7);
    Entitate p4( 7,9,7,9);
    Entitate entitati[4] = {p1, p2, p3, p4};
    Entitate results[4];
    int m = 0;
    assert (p1.getPct1() == 1);
    assert (p2.getPct1() == 5);
    assert (p3.getPct1() == 2);
    assert (p4.getPct1() == 7);
    Entitate p5;
    p5.setPct1(10);
    assert (p5.getPct1() == 10);
    assert (p1.getPct2() == 2);
    assert (p2.getPct2() == 1);

}

