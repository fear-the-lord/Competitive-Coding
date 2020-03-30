#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    //The insert(), erase(), find() functions take O(lon N) time because of the underlying AVL tree
    //where N is the no:of elements in the map.
    
    multimap <char, string> m; 
    int n; //no:of elements to be inserted in the map
    cin >> n;
    char ch; 
    string s; 
    
    for(int i=0; i<n; i++) //inserting all the elements one by one
    {
        cin >> ch; 
        cin >> s; 
        m.insert(make_pair(ch, s));
    }
    
    for(auto x:m) //displaying all the elements
        cout << x.first << "->" << x.second << endl;
        
    cout << "Travesing through a sublist---->" << endl;
    auto it2 = m.lower_bound('b'); //boy
    auto it3 = m.upper_bound('c'); //and
    for(auto it4=it2; it4!=it3; it4++)
        cout << (*it4).first << "->" << (*it4).second << endl;
        
    auto it = m.begin();
    m.erase(it);
    cout << "After erasing---->" << endl;
    for(auto x:m) //displaying all the elements
        cout << x.first << "->" << x.second << endl;
        
    //search for "cow" and delete its corresponding entry
    auto f = m.find('c');
    if(f->second == "cow")
        m.erase(f);
    
    cout << "The list after deleting cow is---->";
    for(auto x:m) //displaying all the elements
        cout << x.first << "->" << x.second << endl;
    
	return 0;
}
