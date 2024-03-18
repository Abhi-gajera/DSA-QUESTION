#include <iostream>
#include <vector>
using namespace std;

void unionofvector(vector<int> &arr, vector<int> &brr)
{
    for (int j = 0; j < brr.size(); j++)
    {
        if (arr[j] != brr[j])
        {
            arr.push_back(brr[j]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> brr = {6, 2, 7, 4, 8};

    unionofvector(arr, brr);
}
