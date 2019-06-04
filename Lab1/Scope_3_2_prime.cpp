#include <iostream>

using namespace std;
//Write a program to read a number N from the user and then find the first N primes. A
//prime number is a number that only has two divisors, one and itself.

int main()
{
    int n; //number looking for
    cout << "How many Prime numbers would you like to do?\n";
    cin >> n;

    bool prime = 0;
    bool notPrime = 1;
    int lastPrimeFound = 1;
    int x = 2;

    int totalPrime = 0;

    while (totalPrime != n)
    {
        int i = 2;
        while (notPrime)
        {
            if (x % i == 0)
                {
                    notPrime = 0;
                }

            if (i == x)
            {
                cout << x << "\n";
                totalPrime++;
            }
            i++;
            //notPrime = 1;
        }

        notPrime = 1;
        x++;
    }
    return 0;
}
