#include <bits/stdc++.h>
using namespace std;
int main(){
      int size;
      cin>>size;
      int arr[size];
      for(int i=0;i<size;i++){
            cin>>arr[size];
      }
      int or=0;
       for(int i=0;i<size;i++){
           or ^= arr[i];
             cout<<or<<endl;
      }
// map<int,int> mpp;
//  for(int i=0;i<size;i++){ mpp[arr[i]]++;} 

// for(auto i : mpp){
//       if(i.second == 1)
//       cout<<i.first;
// }
}