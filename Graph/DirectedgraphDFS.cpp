#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> arr[],int v,bool vis[]){
      cout<<v;
      vis[v]=true;
      for(auto i : arr[v]){
            if(vis[i] == false)
            dfs(arr,i,vis);
      }


}
int main(){
      int n,m;
      cin>>n>>m;
   vector<int> arrList[n+1];
      while(m--){
            int a,b;
            cin>>a>>b;
            arrList[a].push_back(b);
      }
      
      for(int i=1;i<n+1;i++){
            cout<<i<<"arr :";
            for(int j=0;j<arrList[i].size();j++){
                  cout<<arrList[i][j]<<" ";
            }
            cout<<"\n";
      }
      bool visited[n+1];
      for(int i=0;i<n+1;i++){
            visited[i]=false;
      }
      dfs(arrList,1,visited);
}