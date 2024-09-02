#include <bits/stdc++.h>
using namespace std;

int main()
{
  // hashing
  int n;
  cin >> n;
  int hash[25] = {0};
  char arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    hash[arr[i] - 'a']++;
  }
  int queries;
  cin >> queries;
  for (int i = 0; i < queries; i++)
  {
    char q;
    cin >> q;
    cout << "q = " << q << " count: " << hash[q - 'a'] << endl;
  }
}