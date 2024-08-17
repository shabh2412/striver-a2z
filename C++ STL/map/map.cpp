#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
  map<int, string> mpp;
  mpp.insert({4, "elephant"});
  mpp[1] = "abc";
  mpp[2] = "def";
  mpp[3] = "cat";
  mpp.emplace(5, "hii");

  for (auto it : mpp)
  {
    cout << it.first << " - " << it.second << endl;
  }
  cout << "finding 3" << endl;
  auto it = mpp.find(3);
  if (it == mpp.end())
  {
    cout << "Not found";
  }
  else
  {
    cout << (*it).first << " - " << (*it).second << endl;
    // use this below code if you want to loop from the found element till the end of the map.
    // for (auto i = it; i != mpp.end(); i++)
    // {
    //   cout << (*i).first << " - " << (*i).second << endl;
    // }
  }
  // cout << (*it).first << " - " << (*it).second << endl;
}

int main()
{
  explainMap();
  return 0;
}