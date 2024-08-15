#include <bits/stdc++.h>
using namespace std;

void explainQueue()
{
  cout << "queue is FIFO" << endl;
  queue<string> students;
  students.push("Rishabh");
  students.push("Sagarika");
  students.push("Jackson");
  students.push("Parth");
  students.push("Satyam");

  cout << "Students size: " << students.size() << endl;

  while (!students.empty())
  {
    cout << students.front() << " ";
    students.pop();
  }
  cout << endl;
}

int main()
{
  explainQueue();
  return 0;
}