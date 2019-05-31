#include <iostream>

using namespace std;


int main()
{
    int x = 3;
    int i=0;

    const char* HW = "Hello World!";
    while( i<x)
    {
        cout << HW << "\n";
        i++;
    }

    return 0;
}
