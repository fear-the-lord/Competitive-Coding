// Write a program to print the numbers from 1-n and from n-1 using recursion
#include <iostream>
using namespace std;

void increasing(int n)
{
    if(n == 0)
        return; 
    else 
    {
       increasing(n - 1);
       cout << n;
    }
}

void decreasing(int n)
{
    if(n == 0)
        return; 
    else 
    {
        cout << n;
        decreasing(n - 1);
    }
}

int main() {
	
	int n; 
	cin >> n; 
	increasing(n);
	cout << endl;
	decreasing(n);
	return 0;
}
