#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double A,B,C,pi=3.14159;

    cin>>A;
    cin>>B;
    cin>>C;

    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<(A*C)/2<<endl;
    cout<<"CIRCULO: "<<pow(C,2)*pi<<endl;
    cout<<"TRAPEZIO: "<<((A+B)*C)/2<<endl;
    cout<<"QUADRADO: "<<B*B<<endl;
    cout<<"RETANGULO: "<<A*B<<endl;

    return 0;
}
