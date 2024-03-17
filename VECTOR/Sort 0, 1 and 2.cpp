#include <iostream>
#include <vector>
using namespace std;

void shortcolor(vector<int>&arr,int size)
{
    int s = 0;
    int i = 0;
    int e = size - 1;

    for(;i<e;)
    {
        if(arr[i] == 0)
        {
            swap(arr[s],arr[i]);
            s++;
            i++;
        }
        else if(arr[i] == 1)
        {
            i++;
        }
        else{
            swap(arr[e],arr[i]);
            e--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 1, 0, 1, 0, 2, 1, 0, 2};
    int size = arr.size();

    shortcolor(arr,size);

    for (int j = 0; j <size; j++)
    {
        cout << arr[j] << " ";
    }
}