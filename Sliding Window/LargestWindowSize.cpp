#include <bits/stdc++.h>
using namespace std;
int BigWindow(vector<int> v, int k)
{
      if (v.size() < k)
            return -1;
      int size = v.size();
      int sum = 0;
      for (int i = 0; i < k; i++)
      {
            sum += v[i];
      }
      int maxi = INT_MIN;
      
            maxi = sum;
      for (int i = 1; i <= size - k; i++)
      {
            sum -= v[i - 1];
            sum += v[(i + k )- 1];
            if (sum > maxi)
                  maxi = sum;
      }
      return maxi;
}
int main()
{
      int testcase;
      cout << "Test case";
      cin >> testcase;
      cout << "\n";
      while (testcase--)
      {
            int size;
            cout << "size :";
            cin >> size;
            cout << '\n';
            vector<int> vec;
            for (int i = 0; i < size; i++)
            {
                  int data;
                  cin >> data;
                  vec.push_back(data);
            }
            cout << "Enter Window Size :";
            int WindowSize;
            cin >> WindowSize;
            cout << "Your Answer is " << BigWindow(vec, WindowSize);
      }
}