// Fast Power Problem. Calculating a^b with less no:of steps.
// 2^8 = (2^4)^2 
// 2^5 = 2*(2^4)

#include <iostream>
#include <cmath>
using namespace std;

bool isEven(int b)
{
    if(b % 2 == 0)
        return true; 
    else
        return false;
}

int power(int a, int b)
{
    if(b == 0)
        return 1;
    else
    {
        if(isEven(b)) // if the power is even
            return pow(power(a, b / 2), 2);
        else // if the power is odd
            return a * pow(power(a, b / 2), 2);
    }
}

int main() 
{
	int a, b; 
	cin >> a >> b; 
	cout << power(a, b) << endl;
	return 0;
}
