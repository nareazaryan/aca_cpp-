#include <cstdlib>
#include <iostream>
using namespace std;

//// 41. Write a program that takes x and y as input (using int main(int argc,
///char* argv[])),
// creates dynamic matrix of size x by y,

int **CreateMatrix(int rows, int cols) {
  int **mat = new int *[rows];
  for (int i = 0; i < rows; i++) {
    mat[i] = new int[cols];
  }

  return mat;
}

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

int main(int argc, char *argv[]) {

  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  //  cout << x << " " << y;

  int **matrix = CreateMatrix(x, y);
  InitMatrix(matrix, x, y);
  PrintMatrix(matrix, x, y);

  return 0;
}

//// 35. macros which takes 2 numbers and returns min
// #define MIN(a, b) ((a) < (b) ? (a) : (b))

//  38. Redefine static operator new and operator delete

// void* operator new(size_t size) {
//     cout << "Costum made new operator" << endl;
//     void* p = malloc(size);
//     if (!p) throw bad_alloc();
//     return p;
// }

// void operator delete(void *p) {
//   cout << "Custom made delete operator" << endl;
//   free(p);
// }

// void operator delete[](void *p) {
//   cout << "Custom made delete[] operator" << endl;
//   free(p);
// }

//// 39. using the operator new we created, create a dynamic array and
/// initialize
// it with random numbers

// int *CreateArray(int size) {
//   int *arr = new int[size];

//   return arr;
// }

// void InitArray(int *arr, int size) {
//   for (int i = 0; i < size; i++) {
//     arr[i] = rand() % 10;
//   }
// }

// void PrintArray(int *arr, int size) {
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }
// int main() {
//   int size;
//   cout << "enter size of arr: ";
//   cin >> size;

//   int* arr = CreateArray(size);
//   InitArray(arr, size);
//   PrintArray(arr, size);

//   delete[] arr;

//   return 0; }

//// 27. Write a function that returns a dynamic matrix based on the parameter
// we give;

// #include <iostream>
// using namespace std;

// int **CreateMatrix(int rows, int cols) {
//   int **mat = new int *[rows];
//   for (int i = 0; i < rows; i++) {
//     mat[i] = new int[cols];
//   }

//   return mat;
// }

// int main() {

//   int rows;
//   int cols;

//   cout << "Enter number of rows: ";
//   cin >> rows;

//   cout << "Enter number of columns: ";
//   cin >> cols;

//   int **mat = CreateMatrix(rows, cols);

// }

// 28. Write a function that takes 2 dynamic arrays as input and prints the
// array whose sum of its elements is the largest.

// int *CreateArray(int size) {
//   int *arr = new int[size];

//   return arr;
// }

// void InitArray(int *arr, int size) {
//   for (int i = 0; i < size; i++) {
//     arr[i] = rand() % 10;
//   }
// }

// void PrintArray(int*arr, int size){
//     for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// int SumOfElements(int* arr, int size){
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//     sum += arr[i];
//   }

//   return sum;
// }

// void CompareSums(int* arr1, int* arr2, int size){
//     if(SumOfElements(arr1, size) > SumOfElements(arr2, size)){
//         cout << "1st array's sum of elements is bigger" << endl;
//         PrintArray(arr1, size);
//     } else if (SumOfElements(arr1, size) < SumOfElements(arr2, size)){
//         cout << "2nd array's sum of elements is bigger" << endl;
//         PrintArray(arr2, size);
//     } else cout << "The sum of the elements of two arrays is equal" <<
//     endl;
// }

// int main() {
//   int size;

//   cout << "Enter arrays' lenght: ";
//   cin >> size;

//   int *arr1 = CreateArray(size);
//   int *arr2 = CreateArray(size);

//   InitArray(arr1, size);
//   InitArray(arr2, size);

//   CompareSums(arr1, arr2, size);
// }
