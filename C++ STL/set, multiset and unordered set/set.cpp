#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
  set<int> st;
  st.insert(32);
  st.insert(3);
  st.insert(3);
  st.insert(2);
  st.insert(2);
  st.insert(9);
  st.insert(2);
  st.insert(32);
  st.insert(3);
  st.insert(9);
  cout << "size of set: " << st.size() << endl;
  for (auto it : st)
  {
    cout << it << " ";
  }
  cout << endl;

  // erase in set
  cout << "erase 3" << endl;
  st.erase(3);
  cout << "size of set: " << st.size() << endl;
  for (auto it : st)
  {
    cout << it << " ";
  }
  cout << endl;
  cout << "erase complete" << endl;

  // find
  if (st.find(9) != st.end())
  {
    cout << "Found" << endl;
  }
  else
  {
    cout << "Not found" << endl;
  }

  auto i = st.find(9);
  if (i != st.end())
  {
    cout << *i << endl;
  }
  // lower bound
  auto lb = st.lower_bound(20);
  cout << *lb << endl;
  // upper bound
  auto ub = st.upper_bound(20);
  cout << *ub << endl;

  auto endlb = st.lower_bound(45);
  if (endlb == st.end())
  {
    cout << "Not found" << endl;
  }
}
int main()
{
  explainSet();
  return 0;
}