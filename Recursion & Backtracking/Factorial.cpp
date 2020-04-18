//Factorial of a number using recursion 

#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 0)
        return 1;
    else
    {
        int ans = n * fact(n - 1);
        return ans; 
    }
}

int main() 
{
	int n; 
	cin >> n; 
	cout << fact(n) << endl; 
	return 0;
}
