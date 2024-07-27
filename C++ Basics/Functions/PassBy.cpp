#include <bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(int n)
{
  cout << n << endl;
  n += 5;
  cout << n << endl;
  n += 5;
  cout << n << endl;
  n += 5;
  cout << n << endl;
}

// pass by reference
void doSomething2(int &n)
{
  cout << n << endl;
  n += 5;
  cout << n << endl;
  n += 5;
  cout << n << endl;
  n += 5;
  cout << n << endl;
}

// always pass by reference for array
void doSomethingArr(int n[])
{
  n[2] = 20;
  cout << "in doSomethingArr " << n[2] << endl;
}

int main()
{
  int n = 5;
  cout << n << endl;
  doSomething(n);
  cout << "after doSomething " << n << endl;
  doSomething2(n);
  cout << "after doSomething2 " << n << endl;
  int len = 5;
  int arr[len];
  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }
  cout << "before doSomethingArr " << arr[2] << endl;
  doSomethingArr(arr);
  cout << "after doSomethingArr " << arr[2] << endl;

  return 0;
}