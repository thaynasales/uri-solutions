#include<iostream>
using namespace std;

int main(){

    int t1,t2,t3,a1,a2,a3;

    cin>>a1>>a2>>a3;

    t1= 2*a2 + 4*a3;
    t2= 2*a1 + 2*a3;
    t3= 2*a2 + 4*a1;

    if(t1<=t2 && t1<=t3){
        cout<<t1<<endl;
    }
    else if(t2<=t1 && t2<=t3){
        cout<<t2<<endl;
    }
    else{
        cout<<t3<<endl;
    }

    return 0;
}
