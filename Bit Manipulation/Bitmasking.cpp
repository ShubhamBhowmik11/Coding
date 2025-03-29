  #include <bits/stdc++.h>
using namespace std;
int main(){
  // set<int> jyo;
  //     jyo.insert(1);
  //     jyo.insert(4);
  //     jyo.insert(3);
  //     jyo.insert(2);
  //     jyo.insert(5);

    //  for(auto i : jyo){
    //   cout<<i<<endl;
    //  }
     long long int x=0;
    x = (x | (1<<5));
    x = (x | (1<<3));
    x = (x | (1<<1));
    x = (x | (1<<2));
    x = (x ^ (1<<1));
    for(int bit=0;bit<63;bit++){
      if(x & (1<<bit))
     cout<<bit<<endl;
    }
    cout<<x;
 
}