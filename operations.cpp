#include "operations.h"

void CadranulUnu(Entitate entitati[],int k){
    int i;
    for(i=1;i<=k;i++){
        if(entitati[i].getPct1() > 0 && entitati[i].getPct2() > 0 && entitati[i].getPct3() > 0 && entitati[i].getPct4() > 0){
            cout<<"entitatea cu coordonatele "<<entitati[i].getPct1()<<" "<<entitati[i].getPct2()<<" " <<entitati[i].getPct3()<<" " <<entitati[i].getPct4()<<" se afla in cadranul 1"<<endl;
        }
    }
}
void CeaMaiMare(Entitate entitati[],int k){
    int i;
    int l=-1;
    int r=-1;
    int aux=0;
    for(i=1;i<=1;i++){
        if(entitati[i].getPct1()>entitati[i].getPct2())
            r=entitati[i].getPct1()-entitati[i].getPct2();
        else r=entitati[i].getPct2()-entitati[i].getPct1();
        r=r*r;
    }
    for(i=2;i<=k;i++){
        if(entitati[i].getPct1()>entitati[i].getPct2())
            l=entitati[i].getPct1()-entitati[i].getPct2();
        else l=entitati[i].getPct2()-entitati[i].getPct1();
        l=l*l;
        if(l>r) r=l;
    }

    cout<<"cea mai mare entitate are suprafata "<<r<<endl;
}
