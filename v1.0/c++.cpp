#include <iostream>
#include <ios>
#include "header.h"
#include <cstdlib>
int main(){
    int a;
    int b;
    cout<<"Iveskite kieki studentu" <<endl;
    cin>>a;
    random(a,"kursiokai.txt");
    vector <student> myclass;
    fillVector(myclass,"kursiokai.txt");
    cout<<"Failai sukurti ir rezultatai isvesti failuose." <<endl;
    cout<<"Ar norite sugeneruoti 5 kursioku failus? Taip-0 , Ne - 1"<<endl;
    cin>>b;
    if(b==0){
        random(1000,"kursiokai1.txt");
        random(10000,"kursiokai2.txt");
        random(100000,"kursiokai3.txt");
        random(1000000,"kursiokai4.txt");
        random(10000000,"kursiokai5.txt");
        cout<<"Failai sukurti ir rezultatai isvesti failuose." <<endl;
    }else{
    }
    return 0;
}