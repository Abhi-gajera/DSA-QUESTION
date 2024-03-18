#include<iostream>
#include<vector>
using namespace std;

void revers(vector<int>&arr,int size)
{
    int i =0;
    int j = size-1;
    for(;i<j;)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr ={1,2,3,4,5,6,7,8,9};
    int size = arr.size();

    revers(arr,size);
}
