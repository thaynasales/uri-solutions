#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        unsigned long long int cont=1, kg=0;
        cin>>x;

        if(x==64){
            cout<<"1537228672809129 kg"<<endl;
        }

        else{
            for(int j=0;j<x;j++){
                cont = cont*2;
            }

            kg = (cont/12)/1000;
            cout<<kg<<" kg"<<endl;
        }
    }

    return 0;
}
