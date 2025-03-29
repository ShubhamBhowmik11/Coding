#include <bits/stdc++.h>
using namespace std;
class Bina{
      public :
      int data;
      Bina * left;
      Bina * right;

      Bina(int data1){
            data = data1;
            left = nullptr;
            right = nullptr;
      }
        Bina(int data1,Bina *left1,Bina *right1){
            data = data1;
            left = left1;
            right = right1;
      }
        Bina(int data1,Bina *left1){
            data = data1;
            left = left1;
            right = nullptr;
      }
      


};
Bina *CreateBT(vector<int> vec){
      Bina *root = new Bina(vec[0]);
      
      

      queue<Bina *> q;
      q.push(root);
      int i=1,size=vec.size();
      while(!q.empty()){
       if(size>i) { 
            Bina *lt = new Bina(vec[i]);
         Bina *lside = q.front();
         lside->left = lt; 
         q.push(lt);
       }
       i++;

       if(size<i)break;
       if(size>i) { 
            Bina *rt = new Bina(vec[i]);
             Bina *rside = q.front();
             rside->right = rt;
             q.push(rt);
            }
       i++;
       if(size<i)break;
       q.pop();
      }
      return root;
}

void Preorder(Bina *root)
{
      if(root == nullptr)
      return;
     
      Preorder(root->left);
      Preorder(root->right);
       cout<<root->data;
}
int Returnlogic(Bina *root){
      if(!root)
      return 0;
      int right = Returnlogic(root->left);
      int left = Returnlogic(root->right);
      cout<<right<<"  "<<left<<endl;
      int maxi = max(right,left);
      return maxi+1;
}
void IterativeInOrder(Bina *root){
      stack<Bina *> st;
      Bina *start = root;
      while(root){
            st.push(root);
            if(root)root = root -> left;
      }
      while(!st.empty()){
            cout<<st.top()->data<<" ";
            st.pop();
            
      }
}
int main(){
      int size;
      cin>>size;
      vector<int> vec;
      for(int i=0;i<size;i++){
               int val;
          cin>>val;
          vec.push_back(val);
      }
     Bina *traversal = CreateBT(vec);
     IterativeInOrder(traversal);


}