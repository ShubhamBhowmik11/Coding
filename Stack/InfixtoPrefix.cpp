#include<bits/stdc++.h>
using namespace std;
int Priority(char temp){
      if(temp == '^') return 3;
      else if(temp == '*' || temp == '/' || temp == '%') return 2;
      else if(temp == '+' || temp == '-')return 1;
      else return 0;
  }
string preToInfix(string pre) {
      // Write your code here
      reverse(pre.begin(),pre.end());
      int i = 0, n =pre.length();
      string ans = "";
      stack<char> st;
      while( i < n){
          if(pre[i] >= 'a' && pre[i] <= 'z' || pre[i] >= 'A' && pre[i] <= 'Z'){
              ans += pre[i];
          }
          else if(pre[i] == ')')st.push(pre[i]);
          else if(pre[i] == '('){
              while(!st.empty() && st.top() != '(')
              {
                  ans += st.top();
                  st.pop();
              }
              st.pop();
          }
          else{
              while(!st.empty() && Priority(st.top()) >= Priority(pre[i])){
                  ans += st.top();
                  st.pop();
              }
              st.push(pre[i]);
          }
          i++;
      }
      while(!st.empty()){
           ans += st.top();
                  st.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
}
int main(){
}