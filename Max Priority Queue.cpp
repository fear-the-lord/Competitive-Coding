#include <iostream>
#include <queue>
using namespace std;

int main() {
	
	priority_queue <int> pq; //This is by default a max heap. So it will delete elements in decreasing order of weights
	int n; //no:of elements to be inserted
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
	    int num;
	    cin >> num; //inserting elements into the priority queue one by one
	    pq.push(num); //O(log N); N = no:of elements at that point in the queue
	}
	
	while(!pq.empty())
	{
	    cout << pq.top() << ","; //O(1)
	    pq.pop(); //O(log N); N = no:of elements at that point in the queue
	}
	return 0;
}
