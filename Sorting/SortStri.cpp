#include<bits/stdc++.h>
using namespace std;
int main(){
	string s = "elephant";
	sort(s.begin(),s.end());
	for(int i =0;i<s.size();i++){
		cout<<s.at(i)<<" ";
	}
}