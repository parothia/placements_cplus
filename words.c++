#include<bits/stdc++.h>
using namespace std;

int main() {
	string str="anurga      paroth       ia";
	stringstream input(str);
	string word,ans="";
	while(input>>word)
		ans=word+" "+ans;
	cout<<ans;
} 
