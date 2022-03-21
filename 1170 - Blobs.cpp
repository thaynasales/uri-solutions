#include <iostream>

using namespace std;

int main(){

    int n;
    double c;

    cin>>n;

    while(n--){
        int dias=0;
        cin>>c;

        while(c>1){
            dias = dias + 1;
            c = c/2;
        }

        cout<<dias<<" dias"<<endl;
    }
}
