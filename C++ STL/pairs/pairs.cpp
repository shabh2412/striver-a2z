#include <bits/stdc++.h>
using namespace std;

void createPairs()
{
  pair<int, string> student = {1, "Rishabh"};
  cout << student.first << " " << student.second << endl;
}

void nestedPair()
{
  pair<int, pair<int, string>> student = {
      1, {2, "Rishabh"}};
  cout << "Std:" << student.first << " Roll: " << student.second.first << " Name:" << student.second.second << endl;
}

int main()
{
  createPairs();
  nestedPair();
  return 0;
}