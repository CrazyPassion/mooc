#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	vector<int>::iterator itor = v.begin();
	for(;itor!=v.end();itor++)
		cout<<*itor<<endl;
	return 0;
}