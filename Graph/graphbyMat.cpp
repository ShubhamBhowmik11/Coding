#include<bits/stdc++.h>
using namespace std;
int main(){
      int n,m;
      cin>>n>>m;
      int admat[n+1][n+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                admat[i][j]=0;
            }
      }
      while(m--){
            int a,b;
            cin>>a>>b;
            admat[a][b]=1;
            admat[b][a]=1;
      }
      
      for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                  cout<<admat[i][j]<<" ";
            }
            cout<<"\n";
      }
}