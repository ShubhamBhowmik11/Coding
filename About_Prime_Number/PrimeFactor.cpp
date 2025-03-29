  #include <bits/stdc++.h>
using namespace std;
int main(){
      int number;
      cin>>number;
      // bruteforce code;
      for(int i=2;i<=number;i++){
            while(number%i == 0){
              // cout<<i<<endl;
            number /= i;
            }
      }
      


      //Now We Think About Optimisation
          for(int i=2;i*i<=number;i++){
                       |
                  // Optimisation part 
            while(number%i == 0){
              // cout<<i<<endl;
            number /= i;
            }
      }

}