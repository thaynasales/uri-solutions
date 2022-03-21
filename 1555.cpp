#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n,x,y;
    long ra,be,ca;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x>>y;

        ra = pow(3*x,2)+pow(y,2);
        be = 2*pow(x,2)+pow(5*y,2);
        ca = -100*x+pow(y,3);

        if(ra>be && ra>ca){
            cout<<"Rafael ganhou"<<endl;
        }
        else if(be>ra && be>ca){
            cout<<"Beto ganhou"<<endl;
        }
        else{
            cout<<"Carlos ganhou"<<endl;
        }
    }
    return 0;
}
