#include<bits/stdc++.h>
using namespace std;
void bulid(int index,int low,int high,int seg[],int arr[]){
      
      if(low == high){
            seg[index] = arr[low];
            return ;
      }
      int mid = (low + high) / 2;
      bulid( 2 *index + 1,low,mid,seg,arr);
      bulid(2 * index  + 2,mid+1,high,seg,arr);
      seg[index] = max(seg[2*index + 1],seg[2*index + 2]);
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0 ;i < n ;i++){
   cin>> arr[i];
   }
   
   int seg[4*n];
   bulid(0,0,n-1,seg,arr);
   for(int i=0;i<4*n;i++){
     
      cout<<seg[i]<<" ";
   }
   return 0;
}