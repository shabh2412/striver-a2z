#include <bits/stdc++.h>
using namespace std;
/**
Write a program that takes an array of integers as input and calculates the sum of all its elements.
 */

int main()
{
  int len;
  cin >> len;
  int arr[len];
  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }
  int sum = 0;
  for (int i = 0; i < len; i++)
  {
    sum += arr[i];
  }
  cout << sum;
  return 0;
}