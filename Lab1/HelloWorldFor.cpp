#include <iostream>

using namespace std;


int main()
{
    int x = 2;

    const char* HW = "Hello World!";
    for(int i=0; i<x; i++)
    {
        cout << HW << "\n";
    }

    return 0;
}

