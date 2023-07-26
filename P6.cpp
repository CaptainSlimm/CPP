//Justin William
// COP2000.0M1
// This program gives you the perimeter and area of a rectangle 
// by utilizing object orient coding from the creation of a class with private and member functions

#include <iostream>
#include <string>
using namespace std; 

class Rectangle // Class decleration begins with 

{
private:

	double length;
	double width;
	void setLength(double l);
	void setWidth(double w);
	double getLength();
	double getWidth();
	double calcArea();
	double getPerimeter();

public:
	void show();
		void driver();
		

};
void Rectangle::driver() {
	cout << "Hello, let's do some geometry! You choose the dimensions for a rectangle." << endl;
	cout << "Enter a length for the rectangle." << endl;
	cin >> length;
	cout << "Enter a width for the rectangle." << endl;
	cin >> width;
	cout << "The perimeter of the rectangle is " << getPerimeter() << endl;
	cout << "The area of the rectangle " << calcArea() << endl;
	
}

/* Rectangle::setLength */

void Rectangle::setLength(double l)
{
	if (l >= 0.0)
		length = l;
	else {
		length = 1.0;
		cout << "Invalid length. Program will use default value of 1.0\n";
	}
}

/* Rectangle::setWidth */

void Rectangle::setWidth(double w)
{
	if (w >= 0.0)
		width = w;
	else
	{
		width = 1.0;
		cout << "Invalid width. Using a default value of 1.0\n";
	}
}

/* Rectangle::getLength */ 

double Rectangle::getLength() 
{
	return length;
}

/* Rectantgle::getWidth */
double Rectangle::getWidth()
{
	return width;
}

/* Rectangle::calcArea */
double Rectangle::calcArea()
{
	return length * width; 
}

/* Rectangle::getPerimeter */
double Rectangle::getPerimeter()
{
	return length + length + width + width;
}

int main() {
	Rectangle foo;
	foo.driver();
	system("pause");
	return 0;

}


