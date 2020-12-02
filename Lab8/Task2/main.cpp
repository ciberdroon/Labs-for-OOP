#include <iostream>
#include <cmath>

using namespace std;

void function(double x)
{
    if (x <= 0.0)
    {
        throw x;
    }
    double y = 14 * x + sqrt(x - 8);
    cout << "Answer: " << y << endl;
}

int main()
{
    try
    {
        function(24);
        function(-1);
    }
    catch (const double ex)
    {
        cerr << "Your x = " << ex << ", x must be > 0" << endl;
    }
}


