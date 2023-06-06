#ifndef OFFLINEMESSAGE_H
#define OFFLINEMESSAGE_H

#include<string>
#include<vector>
using namespace std;
//提供离线消息表的操作方法

class OfflineMessage
{
public:
    //存储用户离线消息
    void insert(int userid, string msg);

    //删除用户离线消息
    void remove(int userid);

    //查询用户离线消息

    vector<string> query(int userid);

};


#endif