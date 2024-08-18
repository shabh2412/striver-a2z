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

void explainFind()
{
  int arr[5] = {10, 20, 30, 40, 12};
  auto it = find(arr, arr + size(arr), 12);

  if (it != arr + size(arr)) // Check if the element was found
  {
    int index = distance(arr, it); // Calculate the index
    cout << "Element found at index: " << index << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
}

void explainnNextPermutation()
{
  string str = "rishabh";
  do
  {
    cout << str << endl;
  } while (next_permutation(str.begin(), str.end()));
}

void explainPrevPermutation()
{
  string str = "Rishabh";
  do
  {
    cout << str << endl;
  } while (prev_permutation(str.begin(), str.end()));
}

int main()
{
  explainPrevPermutation();
  return 0;
}
