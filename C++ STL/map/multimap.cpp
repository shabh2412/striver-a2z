#include <bits/stdc++.h>
using namespace std;

void explainMultiMap()
{
  // multiple copies of same key can be stored
  // in multimap, the keys are sorted, however, the values are not sorted, instead, they are stored in the same order as they are inserted.
  multimap<int, string> mmp;

  mmp.emplace(2, "Ritesh");
  mmp.emplace(2, "Kitesh");

  mmp.insert({1, "Hitesh"});
  mmp.insert({1, "Nitesh"});
  mmp.insert({1, "Jitesh"});

  for (auto i : mmp)
  {
    cout << i.first << " " << i.second << endl;
  }
  // equal range.
  auto it = mmp.equal_range(1);

  cout << "printing equal range of 1" << endl;

  for (auto i = it.first; i != it.second; i++)
  {
    cout << (*i).first << " - " << (*i).second << endl;
  }
}

int main()
{
  explainMultiMap();

  return 0;
}