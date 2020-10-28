#include "stdio.h"
#include <iostream>
#include <time.h>

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

    void print(Matrix matr) {
        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < length; ++j) {
                cout << matr.mat[i][j] << endl;
            }
        }
    }
};

    template<typename T>
    void Logic(T matrA) {
        int i, j;
        T matrB;
        printf("Enter elements matrix\n");
        for (i = 0; i < matrA.length; i++)
            for (j = 0; j < matrA.length; j++) {
                scanf("%d", matrA.mat[i][j]);
            }

        printf("Matrix\n");
        for (i = 0; i < matrA.length; i++) {
            for (j = 0; j < matrA.length; j++)
                printf("%d ", matrA.mat[i][j]);
            printf("\n");
        }

        for (i = 0; i < matrA.length; i++) {
            for (j = 0; j < matrA.length; j++)
                matrB.mat[i][j] = matrA.mat[j][i];
        }

        printf("Transpore massiv\n");
        for (i = 0; i < matrB.length; i++) {
            for (j = 0; j < matrB.length; j++)
                printf("%d ", matrB.mat[i][j]);
            printf("\n");
        }

        printf("\n");
        printf("\n");


        for (i = 0; i < matrA.length; i++) {
            for (j = 0; j < matrA.length; j++)
                printf("%d ", matrA.mat[i][j]);
            printf("\n");
        }

        int flag = 0;
        for (i = 0; i < matrA.length; i++) {
            for (j = 0; j < matrA.length; j++) {
                if (i != matrA.length && matrA.mat[i][j] != matrB.mat[i][j])
                    flag = 1;
            }
        }

        if (flag == 1)
            printf("Matrix is not symmetrical");
        else
            printf("Matrix is symmetrical");
    }

    int main(){
        Matrix matr; //obj
        Logic(matr);
    }

