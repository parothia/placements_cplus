#include <bits/stdc++.h>
using namespace std;

class Base {
public:
	int fxn(int a,int b) {
		int sum=a+b;
		return sum;
	}
	float fxn(int a,int b) {
		float sum=a+b;
		return sum;
	}
};

int main() {
	Base a;
	cout<<a.fxn(2,4)<<endl;
	return 0;
}