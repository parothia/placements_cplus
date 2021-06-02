#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--) {
	    stack<char> s;
        string str;
        cin>>str;
        int flag=0;
	    for(int i=0;str[i];i++) {
	        if(str[i]=='{'||str[i]=='['||str[i]=='(')
	            s.push(str[i]);
	        else if(str[i]=='}'&& s.top()=='{'||str[i]==']'&& s.top()=='['||str[i]==')'&& s.top()=='(')
                s.pop();
            else {
                flag=1;
                break;
            }
	        
	    }
	    if(flag==0 && s.empty()) {
	        cout<<"balanced"<<endl;
	    }
	    else {
	        cout<<"Not balanced"<<endl;
	    }
	}
	    
	return 0;
}
