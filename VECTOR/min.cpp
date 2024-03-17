#include<iostream>
#include<limits.h>
using namespace std;

int main() 
{

    int n[]={1,5,4,78,9,1,5,55,0,-22};
    int size=10;

    int min=INT_MAX;

    for(int i=0; i<size; i++)
    {
        if(n[i]<min)
        {
            min=n[i];
        }
    }

    cout<<"minimum number of array is "<<min<<endl;

}