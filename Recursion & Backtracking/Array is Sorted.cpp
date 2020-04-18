// Write a program to check if an array is sorted or not using recursion

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if(n == 1) // If the array has only one element then it is already sorted.
        return true; 
    else
    {
        // Check if the first element is less then the second element and then perform a recursive call on the remaining part of the array
        if((arr[0] < arr[1]) && isSorted(arr+1, n-1))
        return true;
    }
    return false;
}

int main() 
{
    int n;
	int arr[n]; 
	cin >> n; 
	for(int i=0; i<n; i++)
	    cin >> arr[i];
	cout << isSorted(arr, n) << endl;
	return 0;
}
