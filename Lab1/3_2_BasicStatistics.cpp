#include <iostream>

using namespace std;
//mean (as a double), maximum value, minimum value,and range

int main()
{
    int n, range;
    double mean = 0;
    int max = 0;
    int min = 0;

    cout << "How many numbers would you like to do?\n";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";

    for(int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;

        if(i==0)
        {
            max = x;
            min = x;
            mean = x;
        }
        else
        {
            if (x > max)
                max = x;
            if (x < min)
                min = x;
            mean = mean + x;
        }
    }
    mean = mean / n;
    range = max - min;
    cout << "Mean: " << mean << "\n";

    return 0;
}
