#include <iostream>
#include "Circle.hpp"
using namespace std;

Circle::Circle(double rad){
		m_Rad = rad;
		cout<<"Circle()"<<endl;
	}
Circle::~Circle(){
		cout<<"~Circle()"<<endl;
	}
double Circle::CalcuArea(){
		cout<<"Circle-->CalcuArea()"<<endl;
		return 3.14*m_Rad*m_Rad;
	}
