#include <iostream>
#include <vector>
using namespace std;


// first metnod to move negative element to one side

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


// second method to move negative element to one side


// void move(vector<int> &arr, int size) {
//   int i = 0;
//   int j = size - 1;
  
//   for (; i <= j;) {
//     if (arr[i] < 0) {
//       i++;

//     }

//     else {
//       swap(arr[i], arr[j]);
//       j--;
//     }
//   }
// }


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
