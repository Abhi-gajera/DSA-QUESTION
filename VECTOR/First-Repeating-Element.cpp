#include <iostream>
#include <vector>
using namespace std;

int repeting(vector<int> arr, int n)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }

    return -1;
}

int main()
{

    vector<int> arr{10, 5, 3, 4, 3, 5, 6};
    int n = arr.size();

    cout << repeting(arr, n);
}
