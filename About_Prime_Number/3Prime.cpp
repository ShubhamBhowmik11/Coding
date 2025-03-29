  #include <bits/stdc++.h>
using namespace std;
int main(){
      int factor;
      cin>>factor;
      int i=2;
      vector<int> v;
//       while(factor>1)
//       {
//             if(factor%i == 0){
//                  v.push_back(i);
//                   factor /= i;
//             }
//             else
//             i++;
//       }
//    while(v.size()>3){
//       int res = v[v.size()-1]*v[v.size()-2];
//       v.pop_back();
//       v.pop_back();
//       v.push_back(res);
//    }



//approch 2
int flag = 0;
int factor1 = factor;
while(flag<2){
      if(factor % i == 0){
            v.push_back(i);
            flag++;
            factor /= i;
            i++;
      }
      else
      i++; 
}
int mul=1;
for(auto i : v ){
   mul *= i;
}
int a=v[0];
int b=v[1];
int c=factor1/mul;
cout<<a<<" " <<b<<"  "<<c;
      return 0;

}