using namespace std;
#include<iostream>
#include<algorithm>

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(int);
	int key; 
	cout << "Enter the element to be searched= ";
	cin >> key;
	
	int* it = find(arr, arr+n, key); //automatically detects the type of the variable at runtime
	//find(starting address, ending address, element to be searched). Returns the address where the element is found.
	int index = it - arr; //converts the address to index of the container.
	if(index == n)
	{
		cout << "Element "<<key<<" is not found";
	}
	else
	{
		cout << "The element "<<key<<" is found at position: " <<index;
	}
	return 0;
	
}
