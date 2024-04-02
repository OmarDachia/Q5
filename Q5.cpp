#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "#5:-> Write a program to enter marks of a student in 5 subjects & calculate the percentage.";
  cout << "\n=========================================================================================";
  cout << "\nProgram Start here:->" << endl;
  cout << "\n++++++++++++++++++++\n";

  double sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0, percentage = 0;
  cout << "Type Subject 1: ";
  cin >> sub1;

  cout << "Type the Subject 2: "<<endl;
  cin >> sub2;

  cout << "Type the Subject 3: ";
  cin >> sub3;

  cout << "Type Subject 4: ";
  cin >> sub4;

  cout << "Type the Subject 5: "<<endl;
  cin >> sub5;


  percentage = ((sub1 + sub2 + sub3 + sub4 + sub5 )/500)*100;


  cout << "Percentage "<< percentage <<endl;

  return 0;
}


