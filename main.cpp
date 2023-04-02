#include <iostream>
#include "tests.h"
#include "entitate.h"
#include "operations.h"

using namespace std;

void adauga(Entitate entitati[], int k){
    int lung1,lung2,lung3,lung4;
    Entitate entitate;

    cout<<"coordx 1: ";
    cin>>lung1;
    cout<<"coordx 2: ";
    cin>>lung2;
    cout<<"coordy 1: ";
    cin>>lung3;
    cout<<"coordy 2: ";
    cin>>lung4;

    entitate = Entitate(lung1,lung2,lung3,lung4);
    entitati[k] = entitate;

}

void afisare(Entitate entitati[], int k){
    int i;
    for(i = 1; i<=k; i++) {
        cout<< entitati[i].getPct1()<<" si "<<entitati[i].getPct2()<<" pe x, respectiv "<< entitati[i].getPct3()<<" si "<<entitati[i].getPct4()<<" pe y ";
        cout<<" "<<endl;
    }
}

/*void CadranulUnu(Entitate entitati[],int k){
    int i;
    for(i=1;i<=k;i++){
        if(entitati[i].getPct1() > 0 && entitati[i].getPct2() > 0){
            cout<<"entitatea cu coordonatele "<<entitati[i].getPct1()<<" "<<entitati[i].getPct2()<<" se afla in cadranul 1"<<endl;
        }
    }
}*/

/*    int i;
    int l=-1;
    int r=-1;
    for(i=1;i<=k;i++){
        r=l;
        if(entitati[i].getPct1()>entitati[i].getPct2())
            l=entitati[i].getPct1()-entitati[i].getPct2();
        else l=entitati[i].getPct2()-entitati[i].getPct1();
        l=l*l;
    }

    cout<<"cea mai mare entitate are suprafata "<<l<<endl;
}*/

void printMeniu(){
    cout<<"1.Adauga entitate: "<<endl;
    cout<<"2.Afiseaza sirul: "<<endl;
    cout<<"3.Cea mai mare entitate: "<<endl;
    cout<<"4.Entitati din cadranul 1:"<<endl;
    cout<<"0.Iesire"<<endl;
}

void meniu(){
    Entitate entitati[100];
    int k = 0;
    while(true){
        printMeniu();
        int optiune;
        cout<<"optiunea: ";
        cin>>optiune;
        if (optiune == 1){
            k++;
            adauga(entitati, k);
        }
        else if (optiune == 2) afisare(entitati, k);
        else if (optiune == 3) CeaMaiMare(entitati,k);
        else if (optiune == 4) CadranulUnu(entitati,k);
        else if (optiune == 0) break;
        else cout<<"optiune gresita"<<endl;
    }
}

int main(){

    cout<<" start... " << endl;
    testEntitate();
    meniu();

    return 0;
}