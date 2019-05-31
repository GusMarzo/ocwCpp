#include <iostream>

using namespace std;


int main()
{
    int x = 3;
    int i=0;

    const char* HW = "Hello World!";
    do
    {
        cout << HW << "\n";
        i++;
    }while( i<x);

    return 0;
}
