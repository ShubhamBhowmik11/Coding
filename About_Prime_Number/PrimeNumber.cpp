  #include <bits/stdc++.h>
using namespace std;
int main(){
      int number;
      cin>>number;
      int c=0;
      for(int i=1;i<=sqrt(number);i++){
            if(number%i == 0){
               c++;

            }
      }
      if( c  == 1)
{
      cout<<"PRIME NUMBER";
}
else
cout<<"NOT A PRIME NUMBER";
      return 0;
}