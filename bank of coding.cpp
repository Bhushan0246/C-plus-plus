#include <iostream>
int main() {
  int pin,tries;
  std::cout << "BANK OF CODING\n\n";
  std::cout << "Enter your PIN: ";
 std::cin >> pin; 
  if(pin<1000 || pin>9999){
  	std::cout<<"Please enter four digit PIN:\n";
  	std::cin>>pin;
	std::cout<<"tries: "<<tries<<"\n";
	tries++;
	}
  while (pin != 1234 && tries <= 3) {
    std::cout << "\nEnter your PIN: ";
    std::cin >> pin;
     std::cout<<"tries: "<<tries<<"\n";
	tries++; 
   }
   if (pin == 1234) {
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n";  
  } 

}

