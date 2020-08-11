#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> s1;
	s1.push(5);
	s1.push(6);
	s1.push(7);
	while(!s1.empty()){
		cout<<s1.front()<<" ";
		s1.pop();
	}
}