#include <iostream>
using namespace std;

int main(){
    int n,m,dpts=0,ans=0;
    cin>>n>>m;
    int notas[m][n+1];
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n+1;j++){
            cin>>notas[i][j];
            if(j>=1){
                sum+=notas[i][j];
            }
        }
        
        if((sum-notas[i][1])>=notas[i][0])
            continue;
        
        if(sum<=notas[i][0]){
            dpts+=notas[i][1];
            while((sum-notas[i][1])+notas[i][1]*10<=notas[i][0]){
                notas[i][1]*=10;    
            }
        }
        else{
            while((sum-notas[i][1])+notas[i][1]/10<=notas[i][0] && notas[i][1]>=1){
            notas[i][1]/=10;
            }
        }
        
        ans+=notas[i][1];
        //cout<<notas[i][1]<<endl;
    }

    cout<<ans-dpts<<endl;
    return 0;
}