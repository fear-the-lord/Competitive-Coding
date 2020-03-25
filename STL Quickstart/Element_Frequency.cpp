using namespace std; 
#include<iostream>
#include<algorithm>

int main()
{
    int arr[] = {30, 40, 40, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    int key; 
    cin >> key;
    int *lb = lower_bound(arr, arr+n, key);
    int *ub = upper_bound(arr, arr+n, key);
    cout << "No:of occurences of element "<<key<<" is= "<<(ub - lb)<<endl;
    return 0;
}

/* lower_bound(arr, arr+n, key) and upper_bound(arr, arr+n, key) are in built functions present in the algorithms header file. 
lower_bound() is used to find the first occurence of the element >= key. 
upper_bound() is used to find the first occurence of the element > key. */