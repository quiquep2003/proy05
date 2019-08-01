// Program to explain Simple Class and Object

#include <iostream>
#define  PI  3.14
using namespace std;

class Circle
{
private:
	float radius;
public:
	void getRadius()
	{
		cout << "Enter Radius: ";
		cin >> radius;
		cout<<endl;
	}

	void area()
	{
		float ar;
		ar = PI * radius * radius;
		cout << "Area del Circulo : " << ar<<"m2"<<endl;
	}

	void perim()
	{
		float pe;
		pe=PI*2*radius;
		cout << "Perimetro del Circulo : " << pe<<"m"<<endl;
	}
};

int main()
{
	Circle c1;

	c1.getRadius();
	c1.perim();
	c1.area();
}

