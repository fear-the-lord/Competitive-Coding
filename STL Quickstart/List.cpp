#include <iostream>
#include <list> //header file for list 

using namespace std;

int main() {
    
    //INITIALIZING LIST
    list <int> l1; 
    list <int> l2{1, 2, 3, 4, 5}; 
    list <string> l3{"apple", "mango", "guava", "banana"}; 
    
    //ITERATING THROUGH LIST 
    for(auto x : l2)
        cout << x << "--->";
    cout << endl;
    
    for(auto it=l3.begin(); it != l3.end(); it++)
        cout << (*it) << "--->"; 
    cout << endl; 
    
    for(list <string> :: iterator it = l3.begin(); it != l3.end(); it++)
        cout << (*it) << "--->";
    cout << endl;
    
    //INSERTING AND DELETING ELEMENTS
    l3.push_back("pineapple");
    l3.pop_front();
    cout << "After adding and deleting" << endl;
    for(auto x : l3)
        cout << x << "--->";
    cout << endl;
    
    l3.sort(); //present in list header
    cout << "After sorting" << endl; 
    for(auto x : l3)
        cout << x << "--->";
    cout << endl;
    
    l3.reverse(); //for reversing the list
    cout << "After reversing" << endl;
    for(auto x : l3)
        cout << x << "--->";
    cout << endl;
    
    cout << "The first element is= " << l3.front() << endl; //accessing the first element
    cout << "The last element is= " << l3.back() << endl; //accessing the last element
    
    l3.push_back("litchi");
    l3.push_back("guava");
    
    //remove an element from the list
    string s; 
    cin >> s;
    l3.remove(s); //removing one or more instances of s from the list
    cout << "After removing" << endl; 
    for(auto x : l3)
        cout << x << "--->";
    cout << endl;
    
    //for erasing one or more elements from the list 
    auto it = l3.begin(); 
    //auto it = l3.begin() + 2; not supported because this is not a linear list
    it++;
    it++;
    l3.erase(it); 
    cout << "After erasing" << endl; 
    for(auto x : l3)
        cout << x << "--->";
    cout << endl;
   
   //inserting at a position in the list 
   it = l3.begin(); 
   it++; //insert at second position; 
   l3.insert(it, "kiwi");
   cout << "After inserting" << endl; 
   for(auto x : l3)
        cout << x << "--->";
    cout << endl;
    
	return 0;
}
