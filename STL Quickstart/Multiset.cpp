#include <iostream>
#include <set>
using namespace std; 

typedef multiset <int> :: iterator It;

int main()
{
    //Multiset - stores multiple elements having the same key value 
    //stored in specific -> sorted order according to the internal comparison object. 
    //once the values are inserted, they cannot be modified.
    //it is an ASSOCIATIVE container - it means that if we have to refer to an element, we have to refer using the key(not by the index).
    //underlying implementation is a BST.
    
    int arr[] = {1,2,3,4,5,4};
    int n = sizeof(arr) / sizeof(int);
    multiset <int> ms(arr, arr+n);
    
    //Deleting an element
    ms.erase(1);
    
    //Inserting an element
    ms.insert(7);
    
    //Count how many times an element is occuring
    cout<<"4 occurs " << ms.count(4) << " times" << endl;
    
    //Finding an element
    auto it = ms.find(4); //gives the first occurence of 4
    cout << (*it) << endl;
    
    //findind all elements whose value = 4
    pair <It, It> p = ms.equal_range(4);
    //pair <iterator_pointing_to_first_4, iterator_pointing_to_last_4>
    
    for(auto it = p.first; it != p.second; it++)
        cout << (*it) << "->";
    cout << endl;
    
    //Lower Bound (>=)and Upper Bound(>)
    for(auto i=ms.lower_bound(2); i != ms.upper_bound(7); i++)
        cout << (*i) << "->"; 
    cout << endl;
    
    

    
    //Iterating over a multiset
    for(auto x:ms)
        cout << x << ",";
    return 0;
}