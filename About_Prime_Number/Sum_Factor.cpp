  #include <bits/stdc++.h>
using namespace std;
int main(){
      int prime;
      cin>>prime;
      int sum=0;
      for(int i=1;i*i<=prime;i++){
            if(prime%i == 0)
           {
             printf("%d\n",i);
             sum += i;}
      // printf("%d\n",sum);

      } 
      printf("%d",sum);
}