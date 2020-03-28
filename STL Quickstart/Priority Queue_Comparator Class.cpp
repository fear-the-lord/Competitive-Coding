//This program shows the implementation of priority queue. It takes the name and age 
//of persons and prioritizes them according to their age, i.e, an older person will have 
//a higher priority. It also finds out the name of the top 3 oldest persons in the queue.
#include <iostream>
#include <cstring>
#include <queue> 

using namespace std;

class Person
{
    public:
        string name; 
        int age; 
        
        Person(){} //default constructor
        Person(string n, int a)
        {
            name = n; 
            age = a; 
        }
};

class PersonCompare //comparator class that tells how the priority queue is going to compare
{
    public: 
        bool operator()(Person A, Person B)
        {
            return A.age < B.age;
        }
};



int main() 
{
	priority_queue <Person, vector<Person>, PersonCompare> pq; 
	int n; //no:of elements to be entered 
	cin >> n; 
	string name; 
	int age;
	
	for(int i=0; i<n; i++)
	{
	    cin >> name >> age; 
	    Person p(name, age);
	    pq.push(p);
	}
	
	for(int i=0; i<3; i++) //prints the top 3 most aged persons
	{
	    Person p = pq.top(); //O(1)
	    cout << "Name is= " << p.name << endl; 
	    cout << "Age is= " << p.age << endl;
	    pq.pop(); //(O(log N))
	    //Total = O(3 log N). Thus, for k persons it would require O(k log N) time. 
	    //Whereas for sorting it would require O(N log N) time. Thus, priority queue is better than sorting an array.
	}
	return 0;
}
