#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3,3, 4, 5};
    vector<int> brr{1, 5, 3,3};

    vector<int> crr;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (ans == brr[j])
            {
                // check if condition and then mark element 
                brr[j] = -1;
                crr.push_back(ans);
            }
        }
    }
    // printing loop
    // for(int i = 0; i < crr.size(); i++)
    // {
    //     cout << crr[i] << " ";
    // }

    // second printing loop

    for(auto value : crr)
    {
        cout << value << " ";
    }
}
