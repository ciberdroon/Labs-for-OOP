#include <iostream>
class Vector {
private:
    static const int length = 3;
    int vector[length];
public:
    Vector() {
        for (int i = 0; i < length; i++) {
            vector[i] = rand() % 100;
        }
    }
};
