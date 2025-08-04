// write a program to print diagonal of 4*4 matrices
#include <iostream>
using namespace std;
int main() {
    int matrix[4][4];
    cout << "Enter elements of 4x4 matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Diagonal elements are:\n";
    for (int i = 0; i < 4; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
    return 0;
}