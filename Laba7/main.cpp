#include "stdio.h"
#include "iostream"

using namespace std;

class Matrix {
public:
    static const int length = 3;
    int mat[length][length];

    Matrix() {
        srand(time(NULL));
        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < length; ++j) {
                mat[i][j] = rand() % 90 + 10;
            }
        }
    }

    void print(Matrix mat) {
        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < length; ++j) {
                cout << mat.mat[i][j] << endl;
            }
        }
    }
};
