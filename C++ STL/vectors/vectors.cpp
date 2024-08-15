#include <bits/stdc++.h>
using namespace std;

void explainVectors()
{
  // dynamic array container
  vector<int> vec;
  vec.push_back(2);
  vec.push_back(1);
  vec.push_back(0);

  vec.emplace_back(23);

  // cout << vec.size() << endl;

  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << endl;
  }

  // iterator

  vector<int>::iterator beginItr = vec.begin();

  vector<int>::iterator endItr = vec.end();

  for (vector<int>::iterator i = beginItr; i < endItr; i++)
  {
    cout << *i << " ";
  }

  cout << endl;

  // auto type detection

  auto beginItr2 = vec.begin();
  auto endItr2 = vec.end();

  cout << "auto type detection" << endl;

  for (auto i = beginItr2; i < endItr2; i++)
  {
    cout << *i << " ";
    // vec.push_back(*i);
  }
  cout << endl;

  // for each loop in c++ vector
  cout << "for each loop in c++ vector" << endl;
  for (auto i : vec)
  {
    cout << i << " ";
  }
  cout << endl;

  // reverse iterator
  cout << "reverse iterator" << endl;
  auto reverseBegin = vec.rbegin();
  auto reverseEnd = vec.rend();
  for (auto i = reverseBegin; i < reverseEnd; i++)
  {
    cout << *i << " ";
  }
  cout << endl;

  // initializing vector of size n
  cout << "Initializing vector of size n" << endl;
  vector<int> arr(5);
  arr.push_back(3);
  arr.push_back(12);
  arr.emplace_back(1);
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;

  vector<int> x(5, 8);
  x.emplace_back(20);
  x.push_back(21);
  x.emplace_back(17);
  for (auto i : x)
  {
    cout << i << " ";
  }
  cout << endl;

  vector<int> nums = {3, 4};
  nums.emplace_back(20);
  nums.push_back(21);
  nums.emplace_back(17);
  for (auto i : nums)
  {
    cout << i << " ";
  }
  cout << endl;

  x.pop_back();

  cout << x.back() << endl;
  vector<int> newVec;
  for (int i = 0; i < 10; i++)
  {
    newVec.push_back(i + 1);
  }
  // deleting items from a vector
  cout << "vector before erasing" << endl;
  for (auto i : newVec)
  {
    cout << i << " ";
  }
  cout << endl;

  newVec.erase(newVec.begin());

  cout << "vector after erasing first element" << endl;
  for (auto i : newVec)
  {
    cout << i << " ";
  }
  cout << endl;

  // erasing a range of items.
  cout << "erasing a range of items" << endl;
  newVec.erase(newVec.end() - 3, newVec.end());
  for (auto i : newVec)
  {
    cout << i << " ";
  }
  cout << endl;
  // clear method
  vec.clear();
  for (auto i : newVec)
  {
    cout << i << " ";
  }
  cout << endl;

  // another way of accessing is by using the .at() method.
  // swap
  vector<int> a = {2, 3, 33, 93, 101, 26, 24, 12, 9, 10};
  vector<int> b = {4, 9};

  swap(a[0], b[0]);
  for (auto i : a)
  {
    cout << i << " ";
  }
  cout << endl;

  // insert
  // basically tell before which position you want to include the element.
  a.insert(a.begin() + a.size() / 2, 69);
  cout << "after inserting an item" << endl;
  for (auto i : a)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  explainVectors();
  return 0;
}