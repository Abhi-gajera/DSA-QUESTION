#include <iostream>
#include <vector>
using namespace std;

void move(vector<int> &arr, int size)
{
    int i = 0;
    int s = 0;
    int j = size - 1;
    for (; i < j;)
    {
        if (arr[i] < 0)
        {
            swap(arr[s], arr[i]);
            i++;
            s++;
        }
        else
        {
            swap(arr[j], arr[i]);
            j--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, -8, -9, 6, -5};
    int size = arr.size();

    move(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
