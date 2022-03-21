#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<string> vetor;
    string codigo;

    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>codigo;
            vetor.push_back(codigo);
        }
        sort(vetor.begin(),vetor.end());

        for(int i=0;i<n;i++){
            cout<<vetor.at(i)<<endl;
        }
        vetor.clear();
    }

    return 0;
}
