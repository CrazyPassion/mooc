#include <iostream>
using namespace std;

#include "Shape.hpp"
#include "Rect.hpp"
#include "Circle.hpp"

int main(int argc, char const *argv[])
{
	Shape *shape1 = (Shape *)new Rect(5.0,6.0);
	Shape *shape2 = (Shape *)new Circle(3.0);
	((Rect *)shape1)->CalcuArea();
	((Circle *)shape2)->CalcuArea();
	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	return 0;
}
