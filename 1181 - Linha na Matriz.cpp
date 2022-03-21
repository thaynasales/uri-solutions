#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int l;
    double m[12][12], soma=0, media=0;
    char t;

    cin>>l;
    cin>>t;

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>m[i][j];
        }
    }


    if(t == 'S'){
        for(int j=0;j<12;j++){
            soma += m[l][j];
        }
        cout<<fixed<<setprecision(1);
        cout<<soma<<endl;
    }

    if(t == 'M'){
        for(int j=0;j<12;j++){
            soma += m[l][j];
        }
        media = soma/12;
        cout<<fixed<<setprecision(1);
        cout<<media<<endl;
    }
}
