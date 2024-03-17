#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    // carating vectory
    vector<int>arr;

    // inscrt element
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);


    // print elements
    cout <<"Befour remove ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    // remove element

    arr.pop_back();
    arr.pop_back();

    // print elements
      cout <<"After remove ";
    for(int i = 0; i < arr.size(); i++)
    {
      cout << arr[i]<<" ";
    }

}
