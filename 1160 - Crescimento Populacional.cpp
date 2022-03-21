#include <iostream>

using namespace std;

int main(){

    int t, pa, pb, anos, sec;
    double g1, g2;

    cin>>t;

    for(int i=0;i<t;i++){

        cin>>pa>>pb>>g1>>g2;
        anos = 0;
        sec = 0;

        while(pa<=pb){
            pa += (pa*g1)/100;
            pb += (pb*g2)/100;

            anos++;

            if(anos>100){
                sec = 1;
                break;
            }
        }

        if(sec==1){
                cout<<"Mais de 1 seculo."<<endl;
        }
        else{
                cout<<anos<< " anos."<<endl;
        }
    }

    return 0;
}

