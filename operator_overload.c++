#include<bits/stdc++.h>
using namespace std;
/*CANT OVERLOAD
.
::
?:
sizeof
*/
//OPERATor function must be either non-static member function or friend function of a class
//ATLEAST ONE OF OPERANDS MUST BE USER DEFINED CLASSS
// TYPES OF OPERATOR OVERLOADING
//UNARY operator
//Binary operator
//overloading binary operator using friend function
//using friend function we cannot overload = () [] ->
//if friend then for binary must have two arguements and for unary there must be one arguement


//////////////////////////////
///SAMPLE 111///////////////
///////////////////////////
// class Complex {
// private:
// 	int real,imag;
// public:
// 	Complex(int r=0,int i=0):real{r},imag{i} { }
// 	Complex operator + (Complex const &obj) {
// 		Complex res;
// 		res.real=real + obj.real;
// 		res.imag=imag + obj.imag;
// 		return res;
// 	}
// 	void print() {
// 		cout<<real<<" +i"<<imag<<endl;
// 	}
// };

// int main() {
// 	Complex c1(10,5),c2(2,4);
// 	Complex c3=c1+c2;
// 	c3.print();
// 	return 0;
// }



//////////////////////////////////
/////SAMPLE 22222////////////////
////////////////////////////////


/////CONVERSION OPERATOR///////////
///////////////////////////////

// class fraction {
// 	int num,den;
// public:
// 	fraction(int n,int d) {
// 		num=n;
// 		den=d;
// 	}
// 	operator float() {
// 		return float(num)/float(den);
// 	}
// };

// int main() {
// 	fraction f(2,4);
// 	float val=f;
// 	cout<<val<<" ";
// 	return 0;
// }


// class Distance  {
// public:
// 	int feet,inch;
// 	Distance(int f,int i) {
// 		feet=f;
// 		inch=i;
// 	}
// 	operator -() {
// 		feet--;
// 		inch--;
// 		cout<<"after overload values are "<<feet<<" "<<inch<<endl;
// 	}
// };

// int main() {
// 	Distance d(8,9);
// 	-d;
// 	return 0;
// }


/////////////////////////////////////////
////overloading using friend function////
/////////////////////////////////////////

// class Distance  {
// public:
// 	int feet,inch;
// 	Distance() {
// 		feet=0;
// 		inch=0;
// 	}
// 	Distance(int f,int i) {
// 		feet=f;
// 		inch=i;
// 	}
// 	friend Distance operator + (Distance &,Disance&);
// };

// Distance operator +(Distance &d1,Distance &d2) {
// 	Distance d3;
// 	d3.feet=d1.feet+d2.feet;
// 	d3.inch=d1.inch+d2.inch;
// 	return d3;
// }


// int main() {
// 	Distance d1(8,9);
// 	Distance d2(10,2);
// 	Distance d3;
// 	d3=d1+d2;
// 	return 0;
// }



















/////////////////////////////////////////////////
//OVERLOADING PRE AND POST OPERATOR/////
// class Integer {
// private:
// 	int i;
// public:
// 	Integer(int i=0) {
// 		this->i=i;
// 	}
// 	//overloading prefix operator
// 	Integer operator ++() {
// 		Integer temp;
// 		temp.i=++i;
// 		return temp;
// 	}

// 	//overloading post operator
// 	Integer operator ++(int) {
// 		Integer temp;
// 		temp.i=i++;
// 		return temp;
// 	}
// 	void display() {
// 		cout<<"i= "<<i<<endl;
// 	}
// };

// int main() {
// 	Integer i1(3);
// 	cout<<"Befor increment ";
// 	i1.display();
// 	Integer i2=++i1;
// 	cout<<"After increment ";
// 	i2.display();


// 	Integer i3(3);
// 	cout<<"Befor increment ";
// 	i3.display();
// 	Integer i4=i3++;
// 	cout<<"After increment ";
// 	i4.display();
// 	return 0;
// }



//////////////////////////////////////////////////
///overloading steam extraction(<<) and insertion(>>)/////
//can't be class member function  we have to make it friend function
//we must use friend function as we are using some other class istream and ostream
class Test {
private:
	int x;
public:
	Test(int x=0):x{x} { }
	friend  void operator >>(istream &input,Test &obj) {
		input >> obj.x;
	}
	friend  ostream& operator <<(ostream &output,Test &obj);
};

// istream& operator >>(istream& input,Test &obj) {
	
// }
ostream& operator <<(ostream& output,Test &obj) {
	output << obj.x;
	return output;
}

int main() {
	Test t;
	cin>>t;
	cout<<t;
	return 0;
}