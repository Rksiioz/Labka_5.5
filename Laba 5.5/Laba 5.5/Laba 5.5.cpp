#include <iostream>

using namespace std;

string DIVIDER = "=====================";

int sumDigits(int n, int depth = 0) 
{
    cout << "Depth:\t" << depth << endl;
    cout << "N =\t" << n << endl;
    cout << "(N mod 10)=\t" << n % 10 << endl;
    cout << DIVIDER << endl;

    return n == 0
        ? 0
        : n % 10 + sumDigits(n / 10, depth + 1);
}


int main() 
{
    int n;
    cout << "N = ";
    cin >> n;
    cout << endl << DIVIDER << endl;
    cout << endl << "Digits sum:\t" << sumDigits(n) << endl;

    return 0;
}