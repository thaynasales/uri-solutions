#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    double c,i;
    int n;

    while(cin>>c>>i>>n){

        double simples,comp;

        simples = c*i*n;
        comp = (c*pow(1+i,n))-c;

        cout<<fixed<<setprecision(2);
        cout<<"DIFERENCA DE VALOR = "<<comp-simples<<endl;
        cout<<"JUROS SIMPLES = "<<simples<<endl;
        cout<<"JUROS COMPOSTO = "<<comp<<endl;
    }
    return 0;
}
