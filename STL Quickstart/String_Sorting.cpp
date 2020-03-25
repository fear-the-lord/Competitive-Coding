using namespace std; 
#include<iostream>
#include<string>
#include<algorithm>

bool compare(string a, string b)
{
    if(a.length() == b.length())
        return a < b; //if lengths of two strings are equal then sort them lexicographically
    return a.length() > b.length(); //returns string a if a.length() > b.length()
}

int main()
{
    string s[100]; //creating a string array. We can also use vectors. 
    int n; //size of the array; 
    cin >> n; 
    cin.get(); //to get inputs after finding a new line(\n) character
    //Enter the strings one by one in the array 
    for(int i=0; i<n; i++)
        getline(cin, s[i]); 
    
    //Dislaying the unsorted string
    cout << "The unsorted string array is---->" << endl; 
    for(int i=0; i<n; i++)
        cout << s[i] << endl;

    sort(s, s+n); //provides the first index and the last index as parameter. Lexicographically sorts the string in ascending order

    cout << "The lexicographically sorted string array is---->" << endl; 
    for(int i=0; i<n; i++)
        cout << s[i] << endl;  

    sort(s, s+n, compare);  

    cout << "The length wise sorted string array is---->" << endl; 
    for(int i=0; i<n; i++)
        cout << s[i] << endl;  

    return 0;
}
