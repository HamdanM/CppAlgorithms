#include <iostream>

using namespace std;


void insertionSort(int a[]);
// A utility function to print an array of size n  
void printArray(int arr[]);  

int main()
{

int a[6] = {12,4,6,2,42,1};

insertionSort(a);
printArray(a);  
return 0;

}

void insertionSort(int a[])
{
//Sorts a given array by insertion sort
//Input: An array A[0..n − 1] of n orderable elements //Output: Array A[0..n − 1] sorted in nondecreasing order
  
  for(int i =0; i<6; i++)
  {
    int v = a[i];
    int j = i-1;
    while(j>=0 & a[j]>v) 
    {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = v;

    cout<<a[i]<<endl;
  }    

}

// A utility function to print an array of size n
void printArray(int arr[])
{
    int i;
    for (i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;
}
