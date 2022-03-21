#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int d,va,vb;
    double ta,tb,db;

    while(cin>>d>>va>>vb){

        db = pow((d*d)+144,2);
        tb = db/vb;
        ta = d/va;

        if(tb<=ta){
            cout<<"N\n";
        }
        else{
            cout<<"S\n";
        }
    }

    return 0;
}