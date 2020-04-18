// The 2048 Problem. Convert a number to string using recursion. 
// 2048 = Two Zero Four Eight

#include <iostream>
#include <string>
using namespace std;

string number[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void print(int n)
{
    cout << number[n] << " ";   
}

void number_to_word(int n)
{
    if(n == 0)
        return; 
    else
    {
        int r = n % 10; 
        n = n / 10; 
        number_to_word(n);
        print(r);
    }
}

int main()
{
	int n; 
	cin >> n;
	number_to_word(n);
	return 0;
}
