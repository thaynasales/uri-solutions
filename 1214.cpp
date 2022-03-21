#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int c;

    cin>>c;

    for(int i=0;i<c;i++){

        int n;
        double soma1=0,media1=0,soma2=0,media2=0;
        cin>>n;
        int p[n];

        for(int j=0;j<n;j++){
            cin>>p[j];
            soma1 += p[j];
        }
        media1 = soma1/n;

        for(int j=0;j<n;j++){
            if(p[j]>media1){
               soma2++;
            }
        }
        media2 = (soma2/n)*100;
        cout<<fixed<<setprecision(3);
        cout<<media2<<"%"<<endl;
    }
}
