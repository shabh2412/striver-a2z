#include <bits/stdc++.h>
using namespace std;
/**
 * Problem: Student Grades Management

Write a program to manage student grades. Your program should be able to:

Add student names and their grades.
Calculate the average grade of the class.
Find and print the highest and lowest grades along with the student names.
Replace a grade for a specific student.
Display all student names and their corresponding grades.

 */

int main()
{
  int n;
  cin >> n;
  string students[n];
  int grades[n];
  int sum = 0;
  int avg;
  int max = INT_MIN;
  string max_student = "";
  int min = INT_MAX;
  string min_student = "";

  for (int i = 0; i < n; i++)
  {
    cin >> students[i] >> grades[i];
    sum += grades[i];
    if (max < grades[i])
    {
      max = grades[i];
      max_student = students[i];
    }
    if (min > grades[i])
    {
      min = grades[i];
      min_student = students[i];
    }
  }

  avg = sum / n;
  cout << "Average grade: " << avg << endl;

  cout << "Hightest: " << max_student << ", " << max << endl;

  cout << "Lowest: " << min_student << ", " << min << endl;

  grades[3] = grades[3] - 1;

  cout << "Updated Grade: " << students[3] << ", " << grades[3] << endl;

  for (int i = 0; i < n; i++)
  {
    cout << students[i] << " " << grades[i] << endl;
  }

  return 0;
}