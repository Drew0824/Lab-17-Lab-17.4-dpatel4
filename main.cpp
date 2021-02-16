#include <iostream>
using namespace std;

double speed(double miles, double hours)
{
  return miles / hours;
} 




int main() {
  
  
  double miles;
  double hours;
  double result;


  cout << endl << "Please input the miles traveled" << endl;
  cin >> miles;
  cout << endl;

  cout << endl << "Please input the hours traveled " << endl;
  cin >> hours;
  cout << endl;

  result = speed(miles, hours);

  cout << "Your speed is " << result << " miles per hour" << endl;






}