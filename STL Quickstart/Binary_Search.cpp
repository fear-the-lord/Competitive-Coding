using namespace std; 
#include<iostream>
#include<algorithm>

int main()
{
	int arr[] = {10, 20, 30, 40, 50}; //provide sorted array as input
	int n = sizeof(arr) / sizeof(int);
	int key;
	//cout << "Enter the element to be searched= "; 
	cin >> key;
	bool found = binary_search(arr, arr+n, key);
	//binary_search(starting_address, ending_address, element_to_be_searched) is an inbuilt method in "algorithm" header which returns true if the element is present
	//else returns false.
    int* lb = lower_bound(arr, arr+n, key); //finds the position of first occurence of arr[i] >= key 
	if(found)
		cout << "The element "<<key<<" is present at position "<<(lb-arr)<<endl; 
	else
		cout<< "The element "<<key<<" is not present"<<endl;
	return 0;
}
