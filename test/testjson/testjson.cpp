#include "json.hpp"
using json=nlohmann::json;

#include<iostream>
#include<vector>
#include<map>
using namespace std;

string func1()
{
    json js;
    js["msg_type"]=2;
    js["from"]="zhangsan";
    js["to"]="lisi";
    js["msg"]="hello,do you know";

    string buf=js.dump();//json数据对象转化为json字符串

    //cout<<js<<endl;
    return buf;

}

int main(){
    string rec=func1();
    json jsbuf=json::parse(rec);//数据反序列化，从json字符串到数据对象

    cout << jsbuf["from"] <<endl;
    cout << jsbuf["msg"] <<endl;
    return 0;
}