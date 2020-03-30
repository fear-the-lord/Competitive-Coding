#include <iostream>
#include <vector> //header file required for using vectors
using namespace std;

int main() 
{
    //WAYS OF DEFINING AND INITIALIZING VECTORS
	vector <int> a;
	vector <int> b(5, 10); 
	vector <int> c(b.begin(), b.end());
	vector <int> d{1, 2, 3, 4, 5};
	
	//WAYS OF ITERATING OVER A VECTOR 
	//using for loops
	for(int i=0; i<b.size(); i++)
	    cout << b[i] << ",";
	cout << endl;
	
	//using iterators
	for(auto it=b.begin(); it != b.end(); it++)
	    cout << *it << ",";
	cout << endl; 
	
	//without using auto
	for(vector <int> :: iterator it = b.begin(); it != b.end(); it++) //since iterator class is present within the vector class
	    cout << *it << ",";
	cout << endl; 
	
	//using for each loop
	for(auto x:b)
	    cout << x << ",";
	cout << endl; 
	
	//TAKING INPUT INTO A VECTOR 
	vector <int> e; 
	int n; 
	cin >> n; 
	for(int i=0; i<n; i++)
	{
	    int num; 
	    cin >> num;
	    e.push_back(num);
	}
	
	//to print all the elements of vector e
	for(int i=0; i<n; i++)
	    cout  << e[i] << ",";
	cout << endl;
	
	//Understanding at memory level, how two vecotrs(vector e and vector d) are different
    cout << d.size() << endl; //no:of elements that the vector is currently holding
    cout << d.capacity() << endl; //size of the underlying array(expansion caused during push_back())
    cout << d.max_size() << endl; //max elements that the vector can hold in a worst case scenario depending upon the available space in the system
    
    cout << e.size() << endl;
    cout << e.capacity() << endl;
    cout << e.max_size() << endl;
	
	
	return 0;
}
