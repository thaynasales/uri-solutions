#include<iostream>
using namespace std;

int main(){

    int n,a,b,resposta;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        resposta=0;

        if(b>a){
            resposta=1;
        }

        else{
            while(b>0){

                if(a%10 == b%10){
                    a = a/10;
                    b = b/10;
                }
                else{
                    resposta=1;
                    break;
                }
            }
        }

        if(resposta==1){
            cout<<"nao encaixa"<<endl;
        }
        else{
            cout<<"encaixa"<<endl;
        }
    }


    return 0;
}
