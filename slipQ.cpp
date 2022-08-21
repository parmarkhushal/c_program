

#include<iostream.h>
#include<stdib.h>

class shape {

	public:
		virtual void area()=0;
};

class circle:public shape {

	public:
		int r;
		void getc() {
		
			cout << "\n enter the radius : ";
			cin >> r;
		}

		void area();
};

class Sphere:public shape {

	public:
		int r1;
		void getr() {
		
			cout << "\n enter the radius: ";
			cin >> r1;
		}

		void area();
}:

class Cylinder:public shape {

	public:
		int r2,h;
		void gett() {
		
			cout << "\n enter the radius2 & height: ";
			cin >> r2 >> h;
		}

		void area();
};

void circle::area() {

	cout << (3.14*r*r);
}

void Sphere::area() {

	cout << (4*3.14*r1*r1);
}

void Cylinder::area() {

	int d = h + r2;

	cout << d;

	cout << (2*3.14*r2*d);
}

void main() {

	int ch;
	circle c;
	Sphere S;
	Cylinder t;

	do {
	
		cout << "\n1.Area of circle";
		cout << "\n1.Area of circle";
 		cout << "\n1.Area of circle";
 		cout << "\n1.Area of circle";
		cout << "\n1.Area of circle";

	}
}






























