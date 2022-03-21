#include<iostream>
#include <iomanip>
using namespace std;

int main(){

    double m[12][12],ctd=0,soma=0,media=0;
    char o;

    cin>>o;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>m[i][j];

            if(j>i && (j+i)<11){
                soma += m[i][j];
                ctd++;
            }
        }
    }

    if(o == 'S'){
        cout<<fixed<<setprecision(1);
        cout<<soma<<endl;
    }

    if(o == 'M'){
        media = soma/ctd;
        cout<<fixed<<setprecision(1);
        cout<<media<<endl;
    }

    return 0;
}
