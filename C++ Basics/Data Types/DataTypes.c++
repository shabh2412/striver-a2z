#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Data types

  // integer - -10^9 - 10^9
  int a, b;

  cin >> a >> b;

  cout << a + b << endl;

  // long - -10^12 - 10^12

  long along, blong;

  cin >> along >> blong;

  cout << along + blong << endl;

  // long long - -10^18 - 10^18
  long long allong, bllong;

  cin >> allong >> bllong;

  cout << allong + bllong << endl;

  // string

  string text1;

  cin >> text1;

  cout << "text 1 :" << " " << text1 << endl;

  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string message;

  getline(cin, message);

  cout << "message: " << message << "\n";

  char new_char;

  cin >> new_char;

  cout << "cin char: " << new_char;

  return 0;
}