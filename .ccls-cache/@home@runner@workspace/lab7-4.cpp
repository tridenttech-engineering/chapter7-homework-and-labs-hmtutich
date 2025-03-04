//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double bill =0.0;
  double total =0.0;
  double average =0.0;
  int months =0; 
  cout << "Enter your electric bill for month 1: ";
  cin >> bill;
  while (bill >=0.0)
    {
      total += bill;
      months += 1;
      cout << "Enter your electric bill for month " << months +1 << ": ";
      cin >> bill;
    }
  if (months>0)
  {
    average = total / months;
    cout << fixed << setprecision(2);
    cout << "The average monthly electric bill is $" << average << endl;
  }
  else
    cout << "No electric bills were entered" << endl;
  return 0;
}