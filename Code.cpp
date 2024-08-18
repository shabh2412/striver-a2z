#include <bits/stdc++.h>
using namespace std;

void explainAccumulate()
{
  int arr[5] = {4, 5, 3, 2, 1};
  int sum = accumulate(arr, arr + sizeof(arr), 0);
  cout << "Sum of: ";
  for (int i : arr)
  {
    cout << i << " +" << " ";
  }
  cout << "0 = ";
  cout << sum << endl;
}

int main()
{
  // accumulate
  explainAccumulate();
  return 0;
}