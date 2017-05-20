#include <iostream>
#include "Rect.hpp"
using namespace std;

Rect::Rect(double height,double weight){
	m_Height = height;
	m_Weight = weight;
		cout<<"Rect()"<<endl;
	}
Rect::~Rect(){
		cout<<"~Rect()"<<endl;
	}
double Rect::CalcuArea(){
		cout<<"Rect-->CalcuArea()"<<endl;
		return m_Weight*m_Height;
	}
