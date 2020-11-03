#include "iostream"

using namespace std;

class Math {
    double a, b, c, perimeter, square;

    Math MathInfo(Math math) {
        cout << "Input a: " << a << endl;
        cout << "Input b: " << b << endl;
        square = (a * b) / 2;
        c = sqrt(a * a + b * b);
        perimeter = a + b + c;
        cout << "Perimeter = " << perimeter << endl;
        cout << "Square = " << square << endl;
    }
};

int main() {
    Math math;
    math.MathInfo(Math math);
}