#include<bits/stdc++.h>
using namespace std;
int main(){
      deque<int> q={1,2,3,4};
      int f= q.front();
      int b= q.back();
      q.push_back(5);
      q.push_front(1);
      cout<<f<<" "<< b<<" "<<q.size();

}