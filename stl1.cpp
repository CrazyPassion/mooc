#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    // 使用vector存储数字：3、4、8、4
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(4);
    
    //循环打印数字
    for(int i = 0 ;i<vec.size();i++)
        cout<<vec[i];
    
    // 使用map来存储字符串键值对
    // cout<<"start"<<endl;
    map<string, string> m;
    pair<string,string>p1("S","Shang Hai");
    pair<string,string>p2("B","Bei Jing");
    pair<string,string>p3("G","Guang Zhou");
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
   
    // 打印map中数据
    map<string,string>::iterator itor = m.begin();
    for(;itor!=m.end();itor++){
        cout<<itor->first<<endl;
        cout<<itor->second<<endl;
    }
    return 0;
}