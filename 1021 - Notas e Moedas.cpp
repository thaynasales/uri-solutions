#include <iostream>

using namespace std;

int main(){

    double n;
    int notas, moedas;

    cin>>n;

    notas = n;
    moedas = (n-notas)*100;

    cout << "NOTAS:"<<endl;
    cout << notas/100 << " nota(s) de R$ 100.00"<<endl;
    notas = (notas%100);
    cout << notas/50 << " nota(s) de R$ 50.00"<<endl;
    notas = (notas%50);
    cout << notas/20 << " nota(s) de R$ 20.00"<<endl;
    notas = (notas%20);
    cout << notas/10 << " nota(s) de R$ 10.00"<<endl;
    notas = (notas%10);
    cout << notas/5 << " nota(s) de R$ 5.00"<<endl;
    notas = (notas%5);
    cout << notas/2 << " nota(s) de R$ 2.00"<<endl;
    notas = (notas%2);

    moedas = (notas*100)+moedas;

    cout << "MOEDAS:"<<endl;
    cout << moedas/100 << " moeda(s) de R$ 1.00"<<endl;
    moedas = moedas%100;
    cout << moedas/50 << " moeda(s) de R$ 0.50"<<endl;
    moedas = moedas%50;
    cout << moedas/25 << " moeda(s) de R$ 0.25"<<endl;
    moedas = moedas%25;
    cout << moedas/10 << " moeda(s) de R$ 0.10"<<endl;
    moedas = moedas%10;
    cout << moedas/5 << " moeda(s) de R$ 0.05"<<endl;
    moedas = moedas%5;
    cout << moedas/1 << " moeda(s) de R$ 0.01"<<endl;
}
