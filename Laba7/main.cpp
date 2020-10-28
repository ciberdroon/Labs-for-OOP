#include "stdio.h"
#include "iostream"

using namespace std;

class Matrix { //comment
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

    template<typename T>
    void Logic(T matrA) {
        int i, j, n = 3;

        matrA = new int *[n];
        for (i = 0; i < n; i++) {
            matrA[i] = new int[n];
        }

        T matrB;
        for (i = 0; i < n; i++) {
            matrB[i] = new int[n];
        }


        printf("Enter elements matrix\n");
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++) {
                scanf("%d", &matrA[i][j]);

            }

        printf("Matrix\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                printf("%d ", matrA[i][j]);
            printf("\n");
        }

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                matrB[i][j] = matrA[j][i];
        }

        printf("Transpore massiv\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                printf("%d ", matrB[i][j]);
            printf("\n");
        }

        printf("\n");
        printf("\n");


        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                printf("%d ", matrA[i][j]);
            printf("\n");
        }

        int flag = 0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i != n && matrA[i][j] != matrB[i][j])
                    flag = 1;
            }
        }

        if (flag == 1)
            printf("Matrix is not symmetrical");
        else
            printf("Matrix is symmetrical");
    }
};

