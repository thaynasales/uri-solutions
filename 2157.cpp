#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int c;
    cin>>c;

    while(c--){
        int b,e;
        string espelho;

        cin>>b>>e;

        for(int i=b;i<=e;i++){
            cout<<i;
            espelho += to_string(i);
        }
        reverse(espelho.begin(),espelho.end());
        cout<<espelho<<endl;
    }

    return 0;
}
