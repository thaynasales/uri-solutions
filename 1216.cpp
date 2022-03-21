#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){

    string nome, distancia;
    double dist, soma=0,ctd=0,media;

    while(getline(cin,nome)){
        getline(cin,distancia);
        dist = stoi(distancia);
        soma += dist;
        ctd++;
    }

    media = soma/ctd;
    cout<<fixed<<setprecision(1)<<endl;
    cout<<media<<endl;



    return 0;
}
