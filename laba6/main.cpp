#include "iostream"

using namespace std;

class IVector {
private:
    int vector[3];
public:
    IVector operator++(int vec) {
        for (int i = 0; i < 3; ++i) {
            this->vector[i] = vector[i] * vector[i];
        }
    }

    IVector operator--(int vec) {
        for (int i = 0; i < 3; ++i) {
            this->vector[i] = vector[i] - vector[i + 1];
        }
    }

    IVector operator+(int vec) {
        for (int i = 0; i < 3; ++i) {
            this->vector[i]=vector[i] + vector[i];
        }
    }
    bool operator<(IVector &vec, IVector &vec2){
        for (int i = 0; i < 3; ++i) {

        }
    }

};

friend IVector operator--(IVector vec) {
    for (int i = 0; i < 3; ++i) {
        this->vector[i] = vector[i] - vector[i + 1];
    }

    bool operator==(MyInt &myInt1, MyInt &myInt2) {
        return myInt1.value == myInt2.value;
    }

    MyInt & operator
    — (
            MyInt & myInt
    )
    {
        myInt.value -= 3;
        return
                myInt;
    }

    int main() {
        MyInt myInt(22);
        cout « !myInt « endl;
        MyInt
        myInt2 = —myInt;
        myInt.print();
        MyInt myInt1 = myInt + 7;
        myInt.print();
        cout « (myInt == myInt2) « endl;
        return 0;
    }