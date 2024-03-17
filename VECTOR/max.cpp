#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

    int a[] = {1, 11, 22, 7, 58, 115, 117, 999, 8, 9, 8, 98, 5, 6};
    int size = 14;

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    cout << "max number is " << max << endl;
}
