#include<bits/stdc++.h>
using namespace std;
class Person {
private:
 int *a;
public:
	Person(int val) {
		a=new int(val);
	}
	Person(const Person& obj) {
		// a=new int(obj.(*a);
		// cout<<"copy";
		// a=new int;
		// *a=*obj.a;
	}
	void Print() {
		cout<<*a<<endl;
	}
	void change(int val) {
		*a=val;
	}

};

int main() {
	Person p(5);
	Person p1=p;
	p.Print();
	p1.Print();
	p1.change(2);
	p.Print();
	p1.Print();
	return 0;
} 
