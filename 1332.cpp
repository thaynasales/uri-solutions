#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string palavra;
        int i=0, tam=0, resposta=1, errado=0;

        cin>>palavra;

        while(palavra[i++] != '\0'){
            tam++;
        }

        if(tam==5){
            resposta=3;
        }
        else{
            if(palavra[0] != 'o'){
                errado++;
            }
            if(palavra[1] != 'n'){
                errado++;
            }
            if(palavra[2] != 'e'){
                errado++;
            }
            if(errado>=2){
                resposta=2;
            }
        }
        cout<<resposta<<endl;
    }

    return 0;
}
