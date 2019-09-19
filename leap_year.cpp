#include <iostream>
using namespace std;

/*
Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are criteria that must be taken into account to identify a leap year:

"The Gregorian leap year rule is: Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400. For example, the years 1700, 1800, and 1900 are not leap years, but the year 2000 is. The Gregorian dates for Easter are computed from a set of ecclesiastical rules and tables."
*/

int main() {
  int year;
  
  cout << "Input an year to find out if it is a leap year.\n";
  cin >> year;
  
  if (0 > year || year > 9999) {
    cout << "Invalid entry\n";
  }
  
  if ( year % 4 == 0  && year % 100 != 0 || year % 400 == 0) {
       cout << "This is a leap year.\n";
      } 
  else {
				cout << "This is not a leap year.\n";
  }
} // end main()
