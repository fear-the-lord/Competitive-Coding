#include<bits/stdc++.h>
using namespace std;
 int main(){
 	bitset<10>a(string("1000101011"));
 	bitset<10>b(string("1000101011"));
 	cout<<a.count()<<"\n";
    cout<<(a&b)<<"\n";
    cout<<(a|b)<<"\n";
    cout<<(a^b)<<"\n";
}