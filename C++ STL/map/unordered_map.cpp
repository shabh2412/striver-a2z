#include <bits/stdc++.h>
using namespace std;

void explainUnorderedMap()
{
  // unordered_map
  // the order of keys is not maintained.
  // it is not stored in a sorted order.
  unordered_map<int, string> ump;
  ump.insert({26, "Rishabh"});

  cout << "size of map: " << ump.size() << endl;

  // accessing single item
  cout << "26: " << ump[26] << endl;

  ump.emplace(18, "Arav");
  ump.emplace(24, "Sagarika");
  ump.insert({5, "Jackson"});

  // iterating
  for (auto it : ump)
  {
    cout << "Birthday: " << it.first << " Name: " << it.second << endl;
  }
  cout << "is Empty? : " << ump.empty() << endl;
  ump.clear();
  cout << "after clear is Empty? : " << ump.empty() << endl;
}

int main()
{
  explainUnorderedMap();
  return 0;
}