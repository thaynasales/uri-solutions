#include<iostream>

using namespace std;

int main(){

    int n,d;
    string data,dataf;

    while(cin>>n>>d){
        int aux=0;

        for(int i=0;i<d;i++){
            cin>>data;
            int crt=0;

            for(int j=0;j<n;j++){
                int x;
                cin>>x;

                if(x==1){
                    crt++;
                }
            }
            if(crt==n&&aux==0){
                aux=1;
                dataf = data;
            }
        }

        if(aux==1){
            cout<<dataf<<endl;
        }
        else{
            cout<<"Pizza antes de FdI"<<endl;
        }
    }
    return 0;
}


/*
int main(){

    int n,d;
    string data,dataf,result;

    while(cin>>n>>d){
        int aux=0;

        for(int i=0;i<d;i++){
            cin>>data;
            int crt=0;

            for(int j=0;j<n;j++){
                int x;
                cin>>x;

                if(x==1){
                    crt++;
                }
            }
            if(crt==n){
                aux=1;
                dataf = data;
            }
        }

        if(aux==1){
            result+=dataf+"\n";
        }
        else{
            result+="Pizza antes de FdI\n";
        }
    }
    cout<<result<<endl;
    return 0;
}
*/
