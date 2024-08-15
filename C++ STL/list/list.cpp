#include <bits/stdc++.h>
using namespace std;

void explainList()
{
  // List is similar to vector, except it has a push front method.
  list<int> ls = {3, 9};
  ls.push_front(24);
  ls.push_back(12);
  for (auto i : ls)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "front elemnt in the list is " << ls.front() << endl;
  cout << "back elemnt in the list is " << ls.back() << endl;
}

int main()
{
  explainList();
  return 0;
}