#include <bits/stdc++.h>
using namespace std;
void bfs(vector<int> arr[], int v, bool vis[])
{
      queue<int> q;
      q.push(v);
      while (!q.empty())
      {
            cout << q.front();
            vis[q.front()] = true;
            for (auto i : arr[q.front()])
            {
                  if (vis[i] == false)
                  {
                        q.push(i);
                        vis[i] = true;
                  }
            }
            q.pop();
      }
}
bool cycle(vector<int> arr[], int v, bool vis[])
{
      queue<int> q;
      q.push(v);
      set<int> st;
      st.insert(v);
      while (!q.empty())
      {
            cout << q.front();
            vis[q.front()] = true;
            for (auto i : arr[q.front()])
            {
                  if (st.find(i) != st.end())
                        return true;
                  if (vis[i] == false)
                  {
                        q.push(i);
                        st.insert(i);
                        vis[i] = true;
                  }
            }
            q.pop();
      }
      return false;
}
int main()
{
      int n, m;
      cin >> n >> m;
      vector<int> arrList[n + 1];
      while (m--)
      {
            int a, b;
            cin >> a >> b;
            arrList[a].push_back(b);
      }

      for (int i = 1; i < n + 1; i++)
      {
            cout << i << "arr :";
            for (int j = 0; j < arrList[i].size(); j++)
            {
                  cout << arrList[i][j] << " ";
            }
            cout << "\n";
      }
      bool visited[n + 1];
      for (int i = 0; i < n + 1; i++)
      {
            visited[i] = false;
      }
      bool ans = cycle(arrList, 1, visited);
}