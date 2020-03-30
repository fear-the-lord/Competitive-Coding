#include <iostream>
#include <map> //header file required for implementing maps
#include <string>
using namespace std;

int main() {

    //The insert(), erase(), find() functions take O(lon N) time because of the underlying AVL tree
    //where N is the no:of elements in the map.
    
    map <string, int> m; //specify the datatype for <key, value>
    
    //INSERTING VALUES INTO MAPS
    //for inserting, we have to first make a pair and then insert
    m.insert(make_pair("Mango", 100)); //using the insert function
    
    pair <string, int> p; //using pair data structure
    p.first = "Apple";
    p.second = 150;
    m.insert(p); 
    
    m["Banana"] = 200; //creating a key explicitly and 
    //then adding the price corresponding to the key using "=" operator
    
    //FINDING A VALUE IN THE MAP
    string key; 
    cin >> key; //taking the key value to be searched from the user
    
    //UPDATING A VALUE 
    m[key] += 20;
    
    auto it = m.find(key); //if the key is present,then it returns a reference 
    //to the key value, else it returns a reference to the end of the map. 
    //we can also use "map <string, int> :: iterator it" instead of auto
    if(it != m.end())
        cout << "Price of " << key << " is = " << m[key] << endl;
    else
        cout << key << " is not presnt." << endl; 
        
    //ERASING A VALUE 
    m.erase(key);
        
    //another characteristic of map is that it stores only unique key values. 
    //if we try to insert (Banana, 400) then the previous value of the key "Banana" will be updated to 400
    if(m.count(key))
        cout << "Price of " << key << " is = " << m[key] << endl;
    else
        cout << key << " is not found." << endl;
    //The difference between find() and count() is that, find() returns an iterator 
    //whereas count() returns an integer.
    
    //TRAVERSING THROUGH A MAP 
    m.insert(make_pair("Litchi", 300));
    
    m["Pineapple"] = 400;
    
    pair <string, int> p1;
    p1.first = "Guava";
    p1.second = 500;
    m.insert(p1);
    
    // for(auto it=m.begin(); it != m.end(); it++)
    //     cout << "Price of " << (*it).first << " is: " << it->second << endl;
    
    for(auto x:m)
        cout << "Price of " << x.first << " is: " << x.second << endl;
    //we will see that all the (key, value) pairs are sorted according to the key values.
    
	return 0;
}
