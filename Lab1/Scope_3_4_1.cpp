#include <iostream>

using namespace std;
//Write a program to read a number N from the user and then find the first N primes. A
//prime number is a number that only has two divisors, one and itself.

int main()
{
    while(1)
    {

        int n; //number looking for
        cout << "Pick a number?\n";
        cin >> n;
        cout << ((n%5 == 0) ? n/5 : -1) << "\n";
    }

    return 0;
}
