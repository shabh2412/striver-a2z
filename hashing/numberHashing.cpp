#include <bits/stdc++.h>
using namespace std;

int main()
{
  // hashing
  int n;
  cin >> n;
  int arr[n];
  int maximum = -10 ^ 9;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    maximum = max(maximum, arr[i]);
  }
  vector<int> hash = {0};
  for (int i = 0; i < n; i++)
  {
    int num = arr[i];
    hash[num]++;
  }
  int queries;
  cin >> queries;
  for (int i = 0; i < queries; i++)
  {
    int q;
    cin >> q;
    cout << "q = " << q << "; hash = " << hash[q] << endl;
  }
}