#include <iostream>
#include <string>
using namespace std;

void myFunction(string firstname,int age) {
  cout << firstname << " Harode. "<<age<<" years old.\n";
}

int main() {
  myFunction("Bala", 21);
  myFunction("Jammy", 20);
  myFunction("Brijo", 19);
  myFunction("Yogesh", 18);
  myFunction("Jaggu", 17);
  myFunction("Bhushan", 17);
  return 0;
}

