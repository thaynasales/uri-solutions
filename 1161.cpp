#include<iostream>

using namespace std;

int main(){

    long long m,n;

    while(cin>>m>>n){
        long long r1=1,r2=1;

        for(int i=1;i<=m;i++){
            r1 = r1*i;
        }

        for(int j=1;j<=n;j++){
            r2 = r2*j;
        }

        cout<<r1+r2<<endl;
    }
    return 0;
}

