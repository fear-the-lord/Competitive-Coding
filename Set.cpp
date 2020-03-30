#include <iostream>
#include <set> //header file required for implementing set
using namespace std;

int main() {
    //All the operations in a set take O(log N) time, where N = no:of elements in the set.
    //Because the underlying data structure is either a BST or a Red-Black Tree.
	
	int arr[] = {1,1,2,2,3,3,4,4,5,5};
	int n = sizeof(arr) / sizeof(int);
	//put the elements in the set; 
	set <int> s; //creating the set
	for(int i=0; i<n; i++)
	    s.insert(arr[i]);
	    
	//Deleting elements from the set
	s.erase(2); //deleting directly
	
	auto it = s.find(3); //finding the postion of the element to be deleted 
	s.erase(it); //then deleting the element at that position.
	    
	//Iterate over the elements in the set
	for(auto x:s)
	    cout << x << ",";
	//we can also use "set <int> :: iterator" instead of auto.
	//We see that only UNIQUE elements are present in the se and that too in SORTED order.
	return 0;
}
