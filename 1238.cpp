#include<iostream>
using namespace std;

int main(){
    int n;
    char first[50],second[50];

    cin>>n;
    while(n--){
        cin>>first>>second;
        int ctd1=0,ctd2=0;

        for(int i=0;i<50;i++){
            if(first[i]=='\0'){
                ctd1=1;
            }
            if(second[i]=='\0'){
                ctd2=1;
            }
            if(ctd1==1 && ctd2==1){
                break;
            }
            if(ctd1==0){
                cout<<first[i];
            }
            if(ctd2==0){
                cout<<second[i];
            }

        }
        cout<<endl;
    }


    return 0;
}
