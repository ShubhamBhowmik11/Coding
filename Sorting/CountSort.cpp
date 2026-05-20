#include <bits/stdc++.h>
using namespace std;
vector<int> CountSort(vector<int> &input)
{
      int maxi = 0, n = input.size();
      for (int i = 0; i < n; i++)
            maxi = max(maxi, input[i]);
      vector<int> cntarr(maxi + 1, 0);
      for (int i = 0; i < n; i++)
            cntarr[input[i]]++;
      vector<int> prearr(maxi + 1, 0);
      prearr[0] = cntarr[0];
      for (int i = 1; i <= maxi; i++)
      {
            prearr[i] = prearr[i - 1] + cntarr[i];
      }
      vector<int> output(n, 0);
      for (int i = n - 1; i >= 0; i--)
      {
            output[prearr[input[i]] - 1] = input[i];
            prearr[input[i]]--;
      }
      return output;
}
int main()
{
      vector<int> input = {1, 4, 3, 2, 2, 1};
      vector<int> ans = CountSort(input);
      for (auto i : ans)
            cout << i << " ";
}