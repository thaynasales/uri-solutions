#include <iostream>

using namespace std;

int main() {

    string l;

    getline(cin,l);

    if(l.length()<=80){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
