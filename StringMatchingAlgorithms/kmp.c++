#include<bits/stdc++.h>
using namespace std;
vector<int> prefix_array(string pat)
{
      int size = pat.length();
      vector<int> pre(size,0);
      int r=1,l = 0;
      while(r<size){
            if(pat[r] == pat[l]){
                  l += 1;
                  pre[r] = l;
                   r+= 1;
            }
            else{
                  if(l != 0){
                        l = pre[l-1];
                  }
                  else
                  {
                    pre[r] = 0;
                   r+= 1;
                  }
            }
       
      }
      return pre;
}
int main(){
      string txt = "onionionspl";
    string pat = "onions";
    vector<int> ans = prefix_array(pat);
    for(auto i : ans){
      cout<<i<<" ";
    }
    int m = txt.length();
    int n = pat.length();
    int i=0,j=0;
    while(i<m-n+1){
      if(txt[i] == pat[j])
      {
            i++;
            j++;
      }
      else{
            if(j != 0)
            j = ans[j-1];
            else
            i += 1;
      }
    }
}