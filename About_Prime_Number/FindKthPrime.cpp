#include <bits/stdc++.h>
using namespace std;
int length=1000000;
bool Seive[1000001];


int CreateSeive(int Number){
for(int i=2;i<=length;i++)Seive[i] = true;


for(int i=2;i*i<=length;i++){
if(Seive[i]){
for(int j=i*i;j<=length;j+=i){
if(j%i == 0)
Seive[j] = false;
}
}
}

//for finding kth prime number
int kthPrime=0;
for(int i=2;i<=Number;i++){
if(Seive[i])
kthPrime++;
}
return kthPrime;
}
int main(){

int test;
cin>>test;
while(test--){
int n;
cin>>n;
cout<<CreateSeive(n)<<endl;
}
}