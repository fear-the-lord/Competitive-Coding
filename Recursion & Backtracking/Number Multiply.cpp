// Write a program to multiple two numbers using recursion. Keep -ve numbers in mind.

#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    if(b == 0)
        return 0; 
    else
    {
        if( a > 0 && b > 0)
            return a + multiply(a, b - 1);
        else if(a > 0 && b < 0)
            return -a + multiply(a, b + 1);
        else if(a < 0 && b > 0)
            return a + multiply(a, b - 1);
        else 
        {
            a = -a; 
            b = -b; 
            return a + multiply(a, b - 1);
        }
    }
}

int main()
{
	int a, b; 
	cin >> a >> b; 
	cout << multiply(a, b) << endl;
	return 0;
}
