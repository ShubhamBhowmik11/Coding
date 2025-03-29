  #include <bits/stdc++.h>
using namespace std;
int length=25;
int Seive[26]={0};


void CreateSeive(){
for(int i=2;i<=length;i++){Seive[i] = i;}


      for(int i=2;i*i<=length;i++){
            if(Seive[i] == i){
        for(int j=i*i;j<=length;j+=i){
                   if(Seive[j] == j){
                      Seive[j] = i;  
                   }
        }
            }
      }
      for(int i=2;i<=length;i++){
            cout<<Seive[i]<<endl;
      }

}
int main(){
CreateSeive();
int n;
cin>>n;
while(n!=1){
      cout<<Seive[n]<<endl;
      n /=Seive[n];
}
}