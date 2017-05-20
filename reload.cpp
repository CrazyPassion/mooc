#include <iostream>
using namespace std;

/**
 * 定义Coordinate类
 * 数据成员：m_iX，m_iY
 * 成员函数：构造函数
 * 重载--运算符，重载+运算符
 */
class Coordinate
{
public:
    Coordinate(double x, double y)
	{
		m_iX = x;
		m_iY = y;
	}
    // 前置--运算符重载
	Coordinate &operator--()
    {
        m_iX -= 1;
        m_iY -= 1;
        return *this;
    }
    
    // 后置--运算符重载
    Coordinate operator--(int)
    {
        Coordinate old(*this);
        old.m_iX = --m_iX;
        old.m_iY = --m_iY;
        return old;
    }    
    
    // +号运算符重载
	Coordinate operator+(const Coordinate &c)
    {
        Coordinate temp(*this);
        temp.m_iX += c.m_iX;
        temp.m_iY += c.m_iY;
        return temp;
    }
    
public:
	double m_iX;
	double m_iY;
};

int main(void)
{
	Coordinate coor1(1.0, 3.0);
	Coordinate coor2(2.0, 4.0);
	Coordinate coor3(0.0, 0.0);

	coor1--;
	--coor2;
	coor3 = coor1 + coor2;

	cout <<showpoint<< coor3.m_iX << endl;
	cout << showpoint<<coor3.m_iY << endl;

	return 0;
}

