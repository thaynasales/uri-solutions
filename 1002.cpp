#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double raio,area,n=3.14159;

    cin>>raio;

    area = pow(raio,2) * n;

    cout<<fixed<<setprecision(4);
    cout<<"A="<<area<<endl;

    return 0;
}
