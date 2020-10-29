#include <iostream>

using namespace std;

class IVector {
private:
    static const int length = 3;
    int vector[length];
public:
    IVector() {
        srand(time(NULL));
        for (int i = 0; i < length; ++i) {
            if (vector[length] == vector[length] * vector[length])
        }
    }
  void print (IVector vec){
      for (int i = 0; i < length; ++i) {
          cout << vec.vector << endl;
      }
    }
};
int main () {
    IVector vec;
}