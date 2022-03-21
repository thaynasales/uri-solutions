#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=0,c=0,movimento,temp;
    char pos1;

    cin>>n>>pos1;

    if(pos1=='A'){
        a++;
    }
    if(pos1=='B'){
        b++;
    }
    if(pos1=='C'){
        c++;
    }

    while(n--){
        cin>>movimento;
        switch(movimento){
         case 1:
            temp=a;
            a=b;
            b=temp;
            break;
         case 2:
            temp=b;
            b=c;
            c=temp;
            break;
         case 3:
            temp=c;
            c=a;
            a=temp;
            break;
         default:
            break;
        }
    }

    if(a==1){
        cout<<"A"<<endl;
    }
    else if(b==1){
        cout<<"B"<<endl;
    }
    else if(c==1){
        cout<<"C"<<endl;
    }


    return 0;
}
