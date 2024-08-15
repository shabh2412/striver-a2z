#include <bits/stdc++.h>
using namespace std;

void explainPQ()
{
  cout << "priority queue stores the highest element at the top, and maintains the order. It uses a heap behid the scene." << endl;
  priority_queue<int> pq;
  pq.push(12);
  pq.push(11);
  pq.push(23);
  pq.push(19);
  pq.push(42);
  pq.push(2);

  cout << "pq size: " << pq.size() << endl;

  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;
}

int main()
{
  explainPQ();
  return 0;
}