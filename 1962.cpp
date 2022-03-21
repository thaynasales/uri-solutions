#include<iostream>
using namespace std;

int main(){
    int n,ano;
    unsigned long int t;

    cin>>n;

    while(n--){
        cin>>t;

        ano = 2015-t;

        if(ano<=0){
            ano = (ano*(-1))+1;
            cout<<ano<<" A.C.\n";
        }
        else{
            cout<<ano<<" D.C.\n";
        }

    }

    return 0;
}
