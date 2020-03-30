using namespace std;
#include<iostream>
#include<cstring>

int main()
{
    //char *strtok(char *s. char *delimiters) delimiters= point of breaking of the character array. Ex-" ", "," , "." etc.
    //returns a token on each subsequent calls.
    //on the first call, function should be passed with string argument for 's'
    //on subsequent calls we should pass the string argument as null.

    cout << "The tokens are---->" << endl;
    char s[100] = "My name is Souvik Ghosh"; 
    char *ptr = strtok(s, " "); //for extracting the first token.
    cout << ptr << endl; 

    while(ptr != NULL)
    {
        ptr = strtok(NULL, " "); //for extracting subsequent tokens.
        cout << ptr << endl; 
    }
    return 0;
}
