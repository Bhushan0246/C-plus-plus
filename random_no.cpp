#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
int the_amazing_random_number;
  srand (time(NULL)); // This seeds the random number generator:
the_amazing_random_number = rand() % 11;  // Use rand() to initialize the_amazing_random_number
//rand()%limit
cout <<"The amazing random number is: "<< the_amazing_random_number << "\n";
}
