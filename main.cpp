
// 22: Write a function that will receive a matrix as int ** and print it

#include <cstdlib>
#include <iostream>
using namespace std;

void InitMatrix(int **mat, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      mat[i][j] = rand() % 10;
    }
  }
}

void PrintMatrix(int **mat, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int rows = 4;
  int cols = 3;

  cout << "Enter number of rows: ";
  cin >> rows;

  cout << "Enter number of columns: ";
  cin >> cols;

  int **mat = new int *[rows];
  for (int i = 0; i < rows; i++) {
    mat[i] = new int[cols];
  }

  InitMatrix(mat, rows, cols);

  PrintMatrix(mat, rows, cols);

}
