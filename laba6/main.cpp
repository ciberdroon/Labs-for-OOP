#include "iostream"

using namespace std;

class IVector
{
private:
    int vector[3];
public:
    IVector()
    {
        for (int i = 0; i < 3; i++)
        {
            this->vector[i] = rand() % 10;
        }
    }

    IVector operator ++()
    {
        for (int i = 0; i < 3; i++)
        {
            this->vector[i] *= vector[i];
        }
        return *this;
    }

    IVector& operator +(IVector &vec1)
    {
        for (int i = 0; i < 3; i++)
        {
            this->vector[i] += vec1.vector[i];
        }
        return *this;
    }

    void print()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << vector[i] << " ";
        }
        cout << endl;
    }

    friend bool operator <(IVector &vec1, IVector &vec2);

    friend IVector operator --(IVector &vec);
};

bool operator <(IVector &vec1, IVector &vec2)
{
    int maxV1 = vec1.vector[0];
    int maxV2 = vec2.vector[0];

    for (int i = 0; i < 3; i++)
    {
        if (vec1.vector[i] > maxV1)
        {
            maxV1 = vec1.vector[i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (vec2.vector[i] > maxV2)
        {
            maxV2 = vec2.vector[i];
        }
    }
    return (maxV1 < maxV2);
}

IVector operator --(IVector &vec)
{
    for (int i = 0; i < 3; i++)
    {
        if (i != 2)
        vec.vector[i] -= vec.vector[i + 1];
    }
    return vec;
}

int main()
{
    IVector vector, vector1;
    cout << "Vector #1: ";
    vector.print();
    cout << "Vector #2: ";
    vector1.print();
    ++vector1;
    cout << "++Vector #2: ";
    vector1.print();
    --vector;
    cout << "--Vector #1: ";
    vector.print();
    IVector sum = vector1 + vector;
    cout << "Vector #2 + Vector #1: ";
    sum.print();
    cout << "Vector #2 < Vector #1: ";
    if (vector1 < vector)
    {
        cout << "True"<< endl;
    } else
        cout << "False" << endl;
    return 0;
}