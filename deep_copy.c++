#include<bits/stdc++.h>
using namespace std; 

class Base {
	int *ptr;
	int val;
public:
	Base() {
		ptr=new int(0);
		val=10;
	}
	Base(const Base &obj) {
		ptr=new int(0);
		*ptr=*(obj.ptr);
		val=obj.val;
	}
	void setptr(int val) {
		*ptr=val;
	}
	int getptr() {
		return *ptr;
	}
};
int main() {
	Base b1;
	Base b2=b1;
	b2.setptr(100);
	cout<<b1.getptr()<<endl;
	cout<<b2.getptr()<<endl;
	return 0;
}