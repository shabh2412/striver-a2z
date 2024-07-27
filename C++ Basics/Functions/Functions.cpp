#include <bits/stdc++.h>
using namespace std;

// functions
// void
// return
// parameterised
// non parameterised

void printHi()
{
  cout << "hi" << endl;
}

// return & parameterised
int sum(int a, int b)
{
  return a + b;
}

int main()
{
  for (int i = 1; i < 3; i++)
  {
    printHi();
  }
  int n1, n2;
  cin >> n1 >> n2;

  cout << sum(n1, n2) << endl;

  return 0;
}