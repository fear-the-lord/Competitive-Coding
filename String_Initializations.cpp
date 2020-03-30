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

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
          
    return 0;
}