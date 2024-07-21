#include <bits/stdc++.h>
using namespace std;

/**
 * Given a string, an index, and a character,
 * replace the current character with the new character at the given index.
 */

int main()
{
  // Read the input string
  string str;
  getline(cin, str);

  // Read the index and the new character
  int index;
  cin >> index;

  char newChar;
  cin >> newChar;

  // Replace the character at the specified index
  str[index] = newChar;

  // Output the modified string
  cout << str << endl;

  return 0;
}
