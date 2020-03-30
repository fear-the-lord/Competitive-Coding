using namespace std; 
#include<iostream>
#include<string>

int main()
{
    //different ways of assignment of strings
    string s0; 
    string s1("Hello World!"); //using constructor of string class
    string s2 = "Hello World!!"; //using assignment operator
    string s3(s2); //using copy constructor
    string s4 = s3; //object assignment
    char a[] = {'a','b','c','\0'};
    s0 = a; //assignment from character array (encapsulated)
    string s5; 

    if(s5.empty()) //boolean function that returns true if a string is empty
        cout<<"s5 is an empty string"<<endl;

    //APPEND
    string s6 = "My name is Souvik.";
    s6.append("I love C++"); //append() adds a string to the end of a particular string. 
    s6 += " and Java"; //concatenation done using operator overloading.
    cout << s6 << endl;

    //REMOVE CHARACTERS FROM A STRING
    string s7 = "Hello There!";
    cout << "Before removal, the length of the string is= " << s7.length() << endl;
    s7.clear(); //removes all the characters in a string
    cout << "After removal, the length of the string is= " << s7.length() << endl;

    //COMPARE TWO STRINGS
    string s8 = "Apple";
    string s9 = "Mango";
    cout<< s8.compare(s9) << endl;
    //compare() does lexicographic comparison between two strings. 
    //Returns 0 if (s8 == s9), > 0 if (s8 > s9) and <0 if (s8 < s9).
    cout << s9.compare(s8) << endl;
    //We can also use overloaded operators <, > to compare two strings
    if(s8 < s9)
        cout << s9 <<" is lexicographically greater than " << s8 << endl;
    else
        cout << s8 <<" is lexicographically greater than " << s9 << endl; 

    //We can also access ith character of a string using the overloaded [] 
    cout << "The 3rd character of the string " << s9 << " is= " << s9[2] << endl;

    //REMOVING A WORD FROM A STRING 
    string s10 = "i love apple juice"; 
    string word = "apple";
    int index = s10.find(word); //finds the starting index of a word
    int len = word.length(); 
    s10.erase(index, len+1); //erases a word from a string by providing the starting index of the word and the no:of characters to be removed after that.
    cout << s10 << endl;

    //ITERATING OVER ALL THE CHARACTERS IN A STRING 
    //using for loops
    for(int i=0; i<s9.length(); i++)
        cout << s9[i] << ":";
    cout << endl;

    //using ITERATORS.
    for(auto i=s9.begin(); i != s9.end(); i++)
        cout << *i << ":";
    cout << endl;

    // iterator is a class inside the string class.
     for(string :: iterator i=s9.begin(); i != s9.end(); i++) //if we don't want to use auto 
        cout << *i << ":";
    cout << endl;

    //using FOR EACH loop
    for(auto ch:s1) //for each character in s1. ch holds each and every character of s1 one at a time. ch is also called a "holder"
        cout << ch << ":";
    cout << endl;
    

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;


          
    return 0;
}