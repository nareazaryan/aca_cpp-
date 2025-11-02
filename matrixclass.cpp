#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;          
    int cols;          
    int data[10][10];  

public:

    Matrix(int r, int c);
    void Input();
    void Display() const;
};

Matrix::Matrix(int r, int c) {
    rows = r;
    cols = c;
}

void Matrix::Input() {
    cout << "Enter elements of matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> data[i][j];
        }
    }
}

void Matrix::Display() const {
    cout << "Matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}




int main() {
    Matrix A(2, 2), B(2, 2);

    cout << "Enter first matrix:\n";
    A.Input();

    cout << "\nEnter second matrix:\n";
    B.Input();

    cout << "\nMatrix A:\n";
    A.Display();

    cout << "\nMatrix B:\n";
    B.Display();
}