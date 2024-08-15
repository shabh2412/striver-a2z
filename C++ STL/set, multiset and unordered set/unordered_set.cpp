#include <bits/stdc++.h>
using namespace std;

auto findSomething(unordered_set<int> st, int x)
{
  auto findIt = st.find(x);
  if (findIt != st.end())
  {
    cout << "found " << *findIt << endl;
    return findIt;
  }
  else
  {
    cout << "Not found" << endl;
    return st.end();
  }
}

void explainUnorderedSet()
{
  // similar to sets, however, there is no ordering.
  // lower bound and upper bound does not work.
  // useful because it has better time complexity. Almost happens in a constant TC.
  // only in some cases when u have a huge dataset and have colliding numbers, then it might take O(n) TC. - rare scenario.
  // gives better search functionality.
  unordered_set<int> st;

  st.insert(2);
  st.insert(32);
  st.insert(2);
  st.insert(2);
  st.insert(2);
  st.insert(2);
  st.insert(99);
  st.insert(32);
  st.insert(32);
  st.insert(99);
  st.insert(99);

  for (auto it : st)
  {
    cout << it << " ";
  }

  cout << endl;

  // find
  auto findIt = st.find(93);
  findSomething(st, 93);
  findSomething(st, 99);
  findSomething(st, 91);
}
int main()
{
  explainUnorderedSet();
  return 0;
}