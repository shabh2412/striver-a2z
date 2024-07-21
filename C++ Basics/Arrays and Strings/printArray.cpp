#include <bits/stdc++.h>
using namespace std;

int main()
{
  int len;
  cin >> len;
  int arr[len];
  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }
  cout << "[";
  for (int i = 0; i < len; i++)
  {
    cout << arr[i];
    if (i + 1 < len)
    {
      cout << ", ";
    }
  }
  cout << "]";
  return 0;
}