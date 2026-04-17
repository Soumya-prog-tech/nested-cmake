#include <coffee.hpp>

#include <iostream>
#include <string>
using namespace std;

string get_username() {
  string name;
  cout << "Enter your name: ";
  cin >> name;
  return name;
}

void greet(string &name) {
  cout << "Hello " << name << "!" << endl;
  serve_water();
  serve_beer();
  serve_daru();
}
