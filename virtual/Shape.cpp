#include <iostream>
#include "Shape.hpp"
using namespace std;

Shape::Shape(){
		cout<<"Shape()"<<endl;
	}
Shape::~Shape(){
		cout<<"~Shape()"<<endl;
	}
double Shape::CalcuArea(){
		cout<<"CalcuArea()"<<endl;
		return 0.0;
	}
