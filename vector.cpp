#include <iostream>
#include <vector>
using namespace std;
int main() { 
  vector<string> last_jedi;
  last_jedi.push_back("kylo");//.push_back(" ") will add a new element at last with value entered under (" ").
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");
  last_jedi.pop_back();//.pop_back() will remove a existing element from last.
  cout <<"Index 0: "<< last_jedi[0] << "\n";
  cout <<"Index 1: "<< last_jedi[1] << "\n";
  cout <<"Index 2: "<< last_jedi[2] << "\n";
  cout <<"Size of last_jedi vector: "<< last_jedi.size(); //.size() will tell the number of values in ::vector. 
} 
