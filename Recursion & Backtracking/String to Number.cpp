// Write a program to convert a string to number using recursion. 

#include <iostream>
#include <array>
using namespace std;

void convert(char ch[], int n)
{
    if(n == -1)
        return; 
    else 
    {
        convert(ch, n - 1);
        cout << ch[n] - 48 << " ";
    }
}

int main() 
{
    char ch[] = {'1', '2', '3', '4', '5'};
    int n = sizeof(ch) / sizeof(ch[0]);
    convert(ch, n - 1);
	return 0;
}
