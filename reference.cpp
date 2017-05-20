#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x = 3;
    //定义引用，y是x的引用
    int &y = x;
    //打印x和y的值
	cout << x << endl;
    cout << y << endl;
	//修改y的值
    y = 4;
    //再次打印x和y的值
    cout << x << endl;
    cout << y << endl; 
	return 0;
}