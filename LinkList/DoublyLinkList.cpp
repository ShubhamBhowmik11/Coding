#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
      int data;
      Node *next;
      Node *back;

public:
      Node(int data1, Node *next1,Node *back1)
      {
            data = data1;
            next = next1;
            back = back1;
      }

public:
      Node(int data1)
      {
            data = data1;
            next = nullptr;
            back = NULL;
      }
};
Node *createArr2LL(vector<int> ar){
      
      Node *temp = new Node(ar[0]);
      Node *pre = temp;
      for(int i=1;i<ar.size();i++){
            Node * temp1 = new Node(ar[i],nullptr,pre);
            pre->next = temp1;
            pre = temp1;
      }
      return temp;
}
void print(Node *head){
      while(head){
            cout<<head->data<<" ";
           head= head->next;
                  }
}
Node *DeleteHeadofDLL(Node *head){
      if(head ==NULL || head->next == NULL){
            return nullptr;
      }
      Node  *temp = head;
      head = head->next;
      head->back = NULL;
      temp->next = NULL;
      delete temp;
      return head;
}
Node *DeleteTailofDLL(Node *head){
      if(head ==NULL || head->next == NULL){
            return nullptr;
      }
      Node * temp = head;
      while (temp->next != NULL)
      {
           temp = temp ->next;
      }
      Node *pre = temp->back;
      pre->next =nullptr;
      temp->back = nullptr;
      delete temp;  
      return head;       
}
Node *DeleteKthNode(Node *head,int k){
      Node *temp = head;
      int cnt=0;
      while(temp){
            cnt++;
            if(cnt == k){
                  break;
            }
            temp = temp->next;
      }
      Node *pre = temp->back;
      Node *front = temp -> next;
      if(pre == NULL && front== NULL){
            return nullptr;
      }
      else if(pre == NULL){
          return  DeleteHeadofDLL(head);
      }
      else if(front == NULL){
           return DeleteTailofDLL(head);
      }

            pre->next = front;
            front->back = pre;
            temp->next = nullptr;
            temp->back = nullptr;
            delete temp;

      return head;
}
void DeleteNode(Node *head){
      Node *front=head->next;
      Node *pre=head->back;
      if(front == NULL){
            pre->next = nullptr;
            front->back =nullptr;
            free(head);
      }
      pre->next = front;
      front->back = pre;
      free(head);
}
Node *InsertBeforeHeadofDLL(Node *head,int data){
      if(head == NULL)
      return nullptr;
      Node *temp = new Node(data);
      head->back = temp;
      temp->next = head;
      head = temp;
      return head;
}
Node *InsertBeforeTailofDLL(Node *head,int data){
      Node *newNode = new Node(data);
      Node *temp = head;
      while(temp->next->next != NULL){
            temp =temp-> next;
      
      }
      Node *front = temp ->next;
      temp-> next = newNode;
      newNode->next =front;
      front->back =newNode;
     newNode->back=temp;
     return head;
      
}
Node *InsertKthNode(Node *head,int data,int k){
      int cnt=0;
      Node *temp = head;
      while(temp){
            cnt++;
            if(cnt == k)break;
            temp = temp -> next;
      }
      Node *newNode=new Node(data);
      Node *After=temp->next;
      temp->next=newNode;
      newNode->back=temp;
      newNode->next=After;
      After->back=newNode;
      
      return head;
}
void *InsertAfterGivenNode(Node *head,int data){
      Node *temp = head;
      Node *newNode=new Node(data);
      Node *After=temp->next;
      temp->next=newNode; 
      newNode->back=temp;
      newNode->next=After;
      After->back=newNode;  
      
}
int main(){
      vector<int> ar = {1, 2, 3, 4};
      Node *head = createArr2LL(ar);
     InsertAfterGivenNode(head,1);
      print(head);
      return 0;
}