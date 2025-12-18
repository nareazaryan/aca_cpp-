#include <iostream>
using namespace std;

void print() { cout << endl; }

template <typename T, typename... Args>
void print(const T &first, const Args &...rest) {
  cout << first;
  if constexpr (sizeof...(rest) > 0) {
    cout << ' ';
    print(rest...);
  }
}

int main() {
  print(1, 2, 3);
  cout << endl;
  print("Hi", 45.0, 3.14);
  cout << endl;
  print("Nare", "Azaryan");
  cout << endl;
}