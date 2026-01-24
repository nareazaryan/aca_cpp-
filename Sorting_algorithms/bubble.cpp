#include <iostream>
using namespace std;

void bubble_sort(int n) {

  int a[100];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

int main() {
  int n;
  cin >> n;

  bubble_sort(n);

  return 0;
}
