#include <bits/stdc++.h>
using namespace std;

void explainMultiSet()
{
  // very much similar to set data structure, but it stores repeating elements as well.

  // unlike set, it stores duplicates. However, the elements are sorted in ascending order.

  multiset<int> ms;

  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(3);
  ms.insert(0);
  ms.insert(21);
  ms.insert(21);
  ms.insert(0);
  ms.insert(3);
  ms.insert(3);

  for (auto it : ms)
  {
    cout << it << " ";
  }
  cout << endl;

  // find
  auto it = ms.find(3); // returns the location of the first occurrence of 3

  cout << *it << endl;

  // erase
  // erase all occurences
  auto eraseAll1 = ms.erase(1);

  cout << eraseAll1 << endl; // this prints the number of elements erased

  cout << "after erase" << endl;
  for (auto it : ms)
  {
    cout << it << " ";
  }
  cout << endl;

  // erase according to reference
  auto eraseFirstOccurence = ms.erase(ms.find(3));

  cout << "erased " << *eraseFirstOccurence << endl; // this prints

  cout << "after erase according to reference" << endl;

  for (auto it : ms)
  {
    cout << it << " ";
  }
  cout << endl;

  // finding count
  cout << "count of 3: " << ms.count(3) << endl;
}
int main()
{
  explainMultiSet();
  return 0;
}