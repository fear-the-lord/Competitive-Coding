#include <iostream>
#include <queue> //header file required to implement queue
using namespace std;

int main() {
	
	queue <int> q; 
	
	//Adding elements into the queue(from the front)
	for(int i=0; i<5; i++)
	    q.push(i); //same function as stack. 
	    
	//Deleting elements from the queue
	cout << "The front element is= " << q.front() <<endl; //fetches the front element of the queue
	cout << "The rear element is= " << q.back() << endl; //fetches the back element of the queue
	
	while(!q.empty()) //check if the queue is empty, similar function to that of stack
	{
	    cout << q.front() << ","; 
	    q.pop(); //deletes from the front, similar function as that of 
	}
	return 0;
}
