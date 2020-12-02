#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    double cathetus1, cathetus2;

    cout << "Enter a = :";
    cin >> cathetus1;
    if (!cin)
    {
        cout << "Incorrect input" << endl;
        cin.clear();
    }
    cin.ignore(100, '\n');

    cout << "Enter b = :";
    cin >> cathetus2;
    if (!cin)
    {
        cout << "Incorrect input" << endl;
        cin.clear();
    }
    cin.ignore(100, '\n');

    double perimeter = cathetus1 + cathetus2 + sqrt(pow(cathetus1, 2) + pow(cathetus2, 2));
    double area = 0.5 * cathetus1 * cathetus2;

    ofstream fOut;
    fOut.open("../Lab8/Task1/Answer.txt");

    if (!fOut)
    {
        cout << "Could not be opened fail" << endl;
        exit(1);
    }
    fOut.fill('*');
    fOut << setw(18) << fixed << setprecision(6) << perimeter << endl;
    fOut << setw(18) << fixed << setprecision(6) << area << endl;
    fOut.close();
    return 0;
}
