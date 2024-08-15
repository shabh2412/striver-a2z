#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
  stack<int> st;
  st.push(19);
  st.push(21);
  st.push(213);
  st.push(22);
  st.push(29);
  st.push(26);
  st.push(25);
  st.push(24);
  st.push(12);
  st.push(9);
  cout << "Size of stack: " << st.size() << endl;

  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }

  cout << endl;
  cout << "Finally, Size of stack: " << st.size() << endl;
}

int main()
{
  explainStack();
  return 0;
}