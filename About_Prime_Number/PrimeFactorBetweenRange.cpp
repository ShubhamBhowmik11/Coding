#include <bits/stdc++.h>
using namespace std;
int length=1000000;
int Seive[1000001]={0};
int CreateSeive(int Prime){
      Seive[0]=0;
      Seive[1]=1;
      for(int i=2;i<=length;i++) Seive[i]=1;


 
      for(int i=2;i*i<=length;i++)
{
            if(Seive[i] != 0){
            for(int j=i*i;j<=length;j++){
                  if(j%i == 0 && Seive[j] != 0){
                        Seive[j]=0;
                        Seive[i]++;
                  }
            }
      }
}
return Seive[Prime];
}
int main(){
      //log N(log N)
      int q;
      cin>>q;
      while(q)
      {
        int PrimeNumber;
        cin>>PrimeNumber;
        cout<<"Prime Factor of "<<PrimeNumber<<" is : "<<CreateSeive(PrimeNumber)<<endl;
      }
}