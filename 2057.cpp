#include<iostream>

using namespace std;

int main(){
    int s,t,f,hfinal;
    cin>>s>>t>>f;

    if(s==0){
        s = 24;
    }

    hfinal = s+t+f;

    if(hfinal>=24){
        hfinal -= 24;
    }

    cout<<hfinal<<endl;

    return 0;
}
