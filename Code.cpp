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
void explainCount()
{

  int arr[13] = {4, 5, 3, 2, 1, 2, 3, 2, 2, 2, 2, 2, 9};
  int countOf2 = count(arr, arr + size(arr), 2);
  cout << "count of 2: " << countOf2;
}


int main()
{
  explainCount();
  return 0;
}