#include<bits/stdc++.h>
using namespace std;
class KarpRabin{
      public :
      int PRIME = 101;
      string text,pattern;
      KarpRabin(string text,string pattern){
            this->text = text;
            this->pattern = pattern;
      }
      long calculateHash(string str){
           long hash = 0;
        long power = 1;
        for (int i = 0; i < str.length(); i++) {
            hash += str[i] * power;
            power *= PRIME;
        }
        return hash;
      }
      long updateHash(long prevHash,char oldChar,char newChar,int power){
            long newHash= (prevHash - oldChar) / PRIME;
            newHash += newChar * power;
            return newHash;
      }
      int search(){
            
            int patternLength = pattern.length();
            long power = 1;
        for (int i = 0; i < patternLength - 1; i++)
            power *= PRIME;
            long patternHash = calculateHash(pattern);
            long textHash = calculateHash(text.substr(0,patternLength));
            
            int textLength = text.length();
            int ans  = 0;
            for(int i=0;i<=textLength-patternLength;i++){
             if(textHash == patternHash)ans++;
             if(i<textLength-patternLength) textHash = updateHash(textHash,text[i],text[patternLength+i],power);
            }
      }
};
int main(){
    KarpRabin obj("cdabcdab","abcd");
    cout<<obj.search();
     return 0;
}