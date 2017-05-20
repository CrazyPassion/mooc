#ifndef RECT_H
#define RECT_H

#include "Shape.hpp"
class Rect:public Shape
{
public:
	Rect(double height,double weight);
	~Rect();
	double CalcuArea();

protected:
	double m_Height;
	double m_Weight;
};

#endif // RECT_H

