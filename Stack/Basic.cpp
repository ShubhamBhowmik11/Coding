#include <bits/stdc++.h>
using namespace std;
int main(){
      //creation of Stack
      stack<int> s; 




      //push operation
      s.push(1);
      s.push(2);
      s.push(3);
      cout<<s.size()<<endl;

      //pop operation
      s.pop();
      cout<<s.size()<<endl;

   //check empty stack or not
   cout<<s.empty()<<endl;
   
      
}
