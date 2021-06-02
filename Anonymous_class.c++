#include<bits/stdc++.h>
//The scope for these objects iis throughout the program
// SCOPE can be restricted using typedef
using namespace std;
///////////////////////////////////////////
//scope is inside main
typedef class {
	int i;
public:
	void setdata(int i){
		this->i=i;
	}
	void print() {
		cout<<"value is "<<this->i<<endl;
	}
} myclass;

int main() {
	myclass obj1,obj2;
	obj1.setdata(10);
	obj1.print();

	obj2.setdata(20);
	obj2.print();
}

/////////////////////////////////////////
// scope is through whole program
class {
	int i;
public:
	void setdata(int i) {
		this->i=i;
	}
	void print() {
		cout<<"value for i :"<<this->i<<endl;
	}
} obj1;

int main() {
	obj1.setdata(10);
	obj1.print();
	return 0;
}