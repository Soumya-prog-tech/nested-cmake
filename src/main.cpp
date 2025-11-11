#include "../include/Greeter.hpp"
#include <string>

int main() {
  string name = get_username();
  greet(name);
  return 0;
}
