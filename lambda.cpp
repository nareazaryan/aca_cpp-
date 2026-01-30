#include <iostream>

int main() {

  auto f = [](int x) 
  { return [x](int y) 
    { 
      return x * y; 
    }; 
  };

  std::cout << f(5)(6) << std::endl;

  return 0;
}