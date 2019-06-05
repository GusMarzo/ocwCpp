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
        if (n%5 != 0 || n <= 0)
        {
            continue;
        }
        cout << n/5 << "\n";
    }

    return 0;
}
