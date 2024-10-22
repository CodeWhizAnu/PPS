#include <iostream>
#include <string>
using namespace std;

int main() {
  //Keywords are reserved by the language and cannot be used as identifiers
  int myVariable = 10; //'int' is a keyword,'myVariable' is an identifiers
  float anotherVariable = 20.5f; //'float' is a keyword,'anotherVariable' is an identifiers
  bool isTrue = true; //'bool' is a keyword,'isTrue' is an identifiers
  
  //print the values of the identifiers
  cout << "The value of myVariable is: " << myVariable << endl;
  cout << "The value of anotherVariable is: " << anotherVariable << endl;
  cout << "The value of isTrue is: " << (isTrue?"true":"false") << endl;
  
  //Demonstrate the use of a keyword in control flow
  if (isTrue)
