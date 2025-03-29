#include <bits/stdc++.h>
using namespace std;
int length=1000000;
bool Seive[1000001];


void CreateSeive(){
for(int i=2;i<=length;i++)Seive[i] = true;


for(int i=2;i*i<=length;i++){
if(Seive[i]){
for(int j=i*i;j<=length;j+=i){
if(j%i == 0)
Seive[j] = false;
}
}
}
}
int main(){
CreateSeive();
int test;
cin>>test;
while(test--){
int n;
cin>>n;
if(Seive[n])
cout<<"Prime Number"<<endl;
else
cout<<"Not a Prime Number"<<endl;
}
}