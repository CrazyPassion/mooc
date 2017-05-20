#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.hpp"
class Circle:public Shape
{
public:
	Circle(double rad);
	~Circle();
	double CalcuArea();

protected:
	double m_Rad;
};

#endif // CIRCLE_H

