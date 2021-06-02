//To avoid implicit conversions as for single operands conversion 
//operator works
#include<iostream>
using namespace std;
class Complex {
	private:
		double real;
		double imag;
	public:
		// Complex(double r=0.0, double i=0.0): real(r),imag(i) {}
		explicit Complex(double r=0.0, double i=0.0): real(r),imag(i) {}
		bool operator == (Complex rhs) {
			return (real==rhs.real && imag==rhs.imag);
		}
};

int main() {
	Complex com1(3.0,0.0);
	// here this should generate error but due to conversion operator it works fine
	// after writing explicit it generates error
	// if(com1== 3.0) cout<<"same"<<endl;
	// in order to make it work after writing explicit keyword
	// we need to first make it Complex type and then compare it like explicit conversion
		if(com1==(Complex)3.0)
	else cout<<"not same"<<endl;
	return 0;
}

// SO we WRITE EXPLICIT keyword to not automate the process until specified.
