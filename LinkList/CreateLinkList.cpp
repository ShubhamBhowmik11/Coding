#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
      int data;
      Node *next;

public:
      Node(int data1, Node *next1)
      {
            data = data1;
            next = next1;
      }

public:
      Node(int data1)
      {
            data = data1;
            next = nullptr;
      }
};
Node *Createarr2linklist(vector<int> ar)
{
      Node *head = new Node(ar[0]);
      Node *mover = head;
      int size = ar.size();
      for (int i = 1; i < size; i++)
      {
            Node *temp = new Node(ar[i], nullptr);
            // both are valid
            mover->next = temp;
            mover = temp;
      }
      return head;
}
Node *removeHead(Node *ll)
{
      if (ll == NULL)
            return ll;
      Node *temp = ll;
      ll = ll->next;
      delete temp;
      return ll;
}
Node *removeTail(Node *tail)
{
      if (tail == NULL || tail->next == NULL)
            return NULL;
      Node *fox = tail;
      while (fox->next->next != NULL)
      {
            fox = fox->next;
      }
      delete fox->next;
      fox->next = nullptr;
      return tail;
}
Node *removeKthElement(Node *head, int k)
{
      if (k == 1)
      {
            Node *temp = head;
            head = head->next;
            delete temp;
            return head;
      }
      int cnt = 0;
      Node *temp = head;
      Node *pre = nullptr;
      while (temp != nullptr)
      {
            cnt++;
            if (cnt == k)
            {
                  pre->next = temp->next;
                  delete temp;
                  break;
            }
            pre = temp;
            temp = temp->next;
      }
      return head;
}
Node *removeElement(Node *head, int ele)
{
      if (head->data == ele)
      {
            Node *temp = head;
            head = head->next;
            delete temp;
            return head;
      }
      int cnt = 0;
      Node *temp = head;
      Node *pre = nullptr;
      while (temp != nullptr)
      {
           
            if (temp->data == ele)
            {
                  pre->next = temp->next;
                  delete temp;
                  break;
            }
            pre = temp;
            temp = temp->next;
      }
      return head;
}
Node *BeforeHeadInsertNode(Node *head,int data){
      if(head == nullptr){
            head = new Node(data);
      }
      Node *temp = new Node(data);
      temp->next = head;
      return temp;
}
Node *AfterTailInsertNode(Node *head,int data){
      if(head == nullptr){
            head = new Node(data);
      }
      Node *temp = new Node(data);
     Node *mover = head;
     while(mover->next != nullptr){
      mover =mover->next;
     }
     mover->next = temp;
     return head;
}
Node *MiddleofNode(Node  *head,int pos,int data){
      if(head == nullptr ){
         if( pos == 1){
            head = new Node(data);
            return head;
         }   
         else
         return head; 
      }
      if(pos == 1){
            Node *newnode = new Node(data,head);
      }
      Node *temp =head;
      int cnt = 0;
      Node *pre=nullptr;
while(temp != nullptr){
      cnt++;
      if(pos == cnt){
            Node *newnode = new Node(data);
            newnode ->next = temp->next;
            temp->next = newnode;
            break;
      }
      pre = temp;
      temp = temp->next;
}
return head;
}
Node *InsertBeforeValue(Node  *head,int val,int data){
      if(head == nullptr ){
         return head;
      }
      if(val == 1){
            Node *newnode = new Node(data,head);
      }
      Node *temp =head;
while(temp != nullptr){
     
      if(temp->next->data == val){
            Node *newnode = new Node(data);
            newnode ->next = temp->next;
            temp->next = newnode;
            break;
      }
      temp = temp->next;
}
return head;
}


int main()
{
      vector<int> ar = {1, 2, 3, 4};
      Node *head = new Node(ar[0], nullptr);
      Node y = Node(ar[1], nullptr);
      //   cout << y.next << endl;
      //   cout<<head->data<<endl;
      Node *arrhead = Createarr2linklist(ar);
      //   cout<<arrhead->data<<endl;/
     Node *empty = nullptr;
      Node *newll =InsertBeforeValue(arrhead,3,100);
      Node *transval = newll;
      while (transval)
      {
            cout << transval->data << endl;
            transval = transval->next;
      }
      return 0;
}