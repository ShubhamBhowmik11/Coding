  #include <bits/stdc++.h>
using namespace std;
int main(){
      //WILSON THEOREM
      //(NUMBER-1)!%NUMBER == (NUMBER-1)%NUMBER
      int number;
      printf("ENTER YOUR INPUT ");
      scanf("%d",&number);
      int res=(number-1)%number;
      int fac=1;
      for(int i=1;i<=number-1;i++){
       fac *= i;
      }
      int res1=fac%number;
      if(res == res1)
      printf("PRIME NUMBER");
  else
  printf("NOT A PRIME NUMBER");
}