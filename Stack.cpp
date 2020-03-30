#include <iostream>
#include <stack> //header file required for implementing stack
using namespace std;

int main() {
	
	stack <int> s; 
	
	//Pushing elements into the stack 
	for(int i=0; i<5; i++)
	    s.push(i); //pushes elements into the stack one by one
	    
	//Popping all the elements out of a stack 
	while(!s.empty()) //function to check if the stack is empty or not 
	{
	    cout << s.top() << ","; //fetches the topmost element of the stack 
	    s.pop(); //pops out the topmost element from the stack
	}
	return 0;
}
/* Internally, stack can be impelemented using an array, vector, list, dynamic array. 
   But using vector and dynamic array is most preferable because we can grow the stack in size. 
   We can also impelement it using a list, but fetching the ith element from the stack needs to be prohibited. */