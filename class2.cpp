#include <iostream>
using namespace std;
class Coordinate
{
    
public:
	Coordinate()
	{
		cout<<"Coordinate()"<<endl;
	}
	Coordinate(int x, int y)
	{
        m_iX = x;
        m_iY = y;
        printInfo();
        cout<<"Coordinate(int x, int y)"<<endl;
	}
	~Coordinate(){
		cout<<"~Coordinate()"<<endl;
		printInfo();
	}
	// 打印坐标的函数
	void printInfo()  
	{
	    cout<<m_iX<<", "<<m_iY<<endl;
	}
public:
	int m_iX;
	int m_iY;
};

class Line{
public:
	Line(int x0, int y0, int x1, int y1):m_start(Coordinate(x0,y0)),m_end(Coordinate(x1,y1))
	{
		// 		m_end = Coordinate(x1,y1);

		// m_start = Coordinate(x0,y0);
		cout<<"Line()"<<endl;
	}
	~Line(){
		cout<<"~Line()"<<endl;
	}
	void printInfo()  
	{
	    m_start.printInfo();
	    m_end.printInfo();
	}

private:
	// Coordinate m_end;	
	Coordinate m_start;
	Coordinate m_end;


};

int main(void)
{
	//定义对象数组
    Line line[2]={Line(1,2,3,4),Line(1,2,3,5)};

	//遍历数组，打印对象信息
	cout<<"start print"<<endl;
	line[0].printInfo();
	line[1].printInfo();

	// delete line;
	// line = NULL;
	return 0;
}