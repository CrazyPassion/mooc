#include <iostream>
using namespace std;

void func(int a = 20) {
    cout << a<< endl;
}

void func(int a = 20, int b = 30, int c =40);
void func(int a, int b, int c) {
    cout << a << ", " << b << " ,"<< c << endl;
}

int main(int argc, char const *argv[])
{
	func(10);
	return 0;
}