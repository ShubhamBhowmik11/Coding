#include<bits/stdc++.h>
using namespace std;
int main(){
//pair
// pair<int,int> p ={1,3};
// cout<<p.first<<" "<<p.second<<endl;


// pair<int,pair<int,int>> p1={1,{2,3}};
// cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
// pair<int,int> arr[]={{1,2},{3,4},{5,6},{7,8}};
// cout<<arr[1].first;


// Vector
//  vector<int> v;
//  v.push_back(1); 
//  v.emplace_back(2);
//  vector<pair<int,int>> v1={{1,2}};
//       v1.push_back({3,4});
//       v1.emplace_back(5,6);
//       vector<int> v2(5,100); //{100,100,100,100,100}
//       cout<<v2[0]<<endl;
//       vector<int> v3(v2); //copy of v2
//       cout<<v3[0]<<endl;
// cout<<v3.size()<<endl;
// cout<<v3.capacity()<<endl;


//stack
// stack<int> st;
// st.push(1); 
// st.push(2); 
// st.push(3); 
// cout<<st.top()<<endl;
// cout<<st.size()<<endl;
// st.pop();
// cout<<st.top()<<endl;
// cout<<st.empty()<<endl;
// stack<int> st1;
// st.swap(st1);
// cout<<st1.top()<<endl;
// all operation in O(1);


// Queue
// queue<int> q;
// q.push(1); //{1}
// q.push(2); // {1,2}
// q.push(3);//{1,2,3}
// q.emplace(4);//{1,2,4};
// q.back() += 5;//{1,2,4+5}

// cout<<q.back();//prints 9
// q.pop();
// cout<<q.front();//prints 2
 // size swap empty same as stack
//  all operation in O(1);

//Priorty_Queue
// priority_queue<int> pq;//Maximum Heap
// //insert the element according to higher value
// pq.push(2); //{2}
// pq.push(5); //{5,2}
// pq.push(1);//{5,2,1}
// pq.pop();//{2,1} 
// while(!pq.empty()){
//       cout<<pq.top()<<endl;
//       pq.pop();
// }
//size swap empty function same as others

//Minimum Heap
priority_queue<int,vector<int>,greater<int>> pq1;
//insert the element according to lower value
pq1.push(5);//{5}
pq1.push(2);//{2,5}
pq1.push(10);//{2,5,10}
pq1.push(8);//{2,5,8,10}
cout<<pq1.top(); // prints 2;
 // push -> log(n) // pop -> log(n) // top -> O(1)

 //Set
 //sorted order && unique element;
//  set<int> s;
//  s.insert(2);//{2}
//  s.emplace(1);//{1,2}
//  s.insert(3);//{1,2,3}
//  s.insert(2);//{1,2,3}
//  s.insert(4);//{1,2,3,4}
//  s.insert(5);////{1,2,3,4,5}
 
//  auto it =st.find(2);//iterator check the element present in set or not , if present return not give s.end() else gives s.end();
//  st.erase(3) // erase the 3 from the set


//  int cnt = st.count(1) // if element is present gives 1 else gives 0;
// auto it1 =  

// Map
// map<string,int> marksMap;
// marksMap["shu"] = 98;
// marksMap["jyo"] = 98;
// marksMap["anu"] = 97;



}