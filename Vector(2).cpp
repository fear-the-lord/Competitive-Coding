#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector <int> a{1, 2, 3, 4, 5}; 
	
	//push back 
	a.push_back(6); //{1, 2, 3, 4, 5, 6}
	cout << "After pushing back 6" << endl;
	for(auto x:a)
	    cout << x << ",";
	cout << endl;
	
	//deleting an element from the last
	a.pop_back();
	cout << "After popping back 6" << endl;
	for(auto x:a)
	    cout << x << ",";
	cout << endl;
	
	//inserting elements in the middle
	a.insert(a.begin()+3, 100); //{1, 2, 3, 100, 4, 5}
	cout << "After inserting 100" << endl;
	for(auto x:a)
	    cout << x << ",";
	cout << endl;
	
	a.insert(a.begin()+4, 2, 101); //{1, 2, 3, 100, 101, 101, 4, 5}
	cout << "After inserting 101, 2 times" << endl;
	for(auto x:a)
	    cout << x << ",";
	cout << endl;
	
	//deleting elements from the middle
	a.erase(a.begin()+3);
	cout << "After deleting 100" << endl;
	for(auto x:a)
	    cout << x << ",";
	cout << endl;
	
	a.erase(a.begin()+3, a.begin()+5);
	cout << "After deleting 101, 2 times" << endl;
	for(auto x:a)
	    cout << x << ",";
	cout << endl;
	
	cout << "The size is= " << a.size() << endl; 
	cout << "The capacity is= " << a.capacity() << endl; 
	
	//We cannot shrink the capacity, but we can expand the capacity 
	a.resize(8);
	cout << "The size is= " << a.size() << endl; //size increases
	cout << "The capacity is= " << a.capacity() << endl; //capacity doesn't shrink
	
	a.resize(18);
	//both size and capacity expands
	cout << "The size is= " << a.size() << endl; 
	cout << "The capacity is= " << a.capacity() << endl; 
	
	a.clear(); //deletes all the elements from the vector, but doesn't delete the space occupied by the vector
	cout << "The size is= " << a.size() << endl; 
	cout << "The capacity is= " << a.capacity() << endl; 
	
	if(a.empty()) // to check if the vector is empty
	    cout << "The vector is empty" << endl;
	    
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	
	cout << "The first element is= " << a.front() << endl; //accessing the first element 
	cout << "The last element is= " << a.back() << endl; //accessing the last element
	
	//Inorder to avoid doubling of memory locations in vectors, we use the reserve operation 
	a.reserve(1000); //The size of the vector won't be doubled until the size becomes 1000
	
	a.push_back(40);
	a.push_back(50);
	a.push_back(60);
	
	cout << "The elements in the vector are---->" << endl;
	for(auto x:a)
	    cout << x << ",";
	cout << endl;
	
	cout << "The size is= " << a.size() << endl; 
	cout << "The capacity is= " << a.capacity() << endl; //capacity remains 1000
	
	return 0;
}
