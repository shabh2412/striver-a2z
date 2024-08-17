#include <bits/stdc++.h>
using namespace std;

void explainSort()
{
  int arr[5] = {5, 23, 5, 56, 1};

  sort(arr + 3, arr + 5);

  // for (int i = 0; i < sizeof(arr); i++)
  // {
  //   cout << arr[i] << " ";
  // }

  for (int i : arr)
  {
    cout << i << " ";
  }

  cout << endl;

  vector<int> vec = {9, 12, 99, 1, 20, 340, 11, 10, 933, 344, 10000, 2};
  sort(vec.begin(), vec.begin() + 4);
  for (auto it : vec)
  {
    cout << it << " ";
  }
  cout << endl;
}

int main()
{
  explainSort();
  return 0;
}