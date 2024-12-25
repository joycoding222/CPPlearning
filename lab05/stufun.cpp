#include "stuinfo.hpp"
#include <iostream>
using namespace std;

void inputstu(stuinfo stu[], int n)
{
    for (int i = 0; i < n; i++)
    {   
        cout << "Enter name:";
        cin.getline(stu[i].name, 20);
        cout << "Enter Score:" << endl;

        cin >> stu[i].score[0];
        cin >> stu[i].score[1];
        cin >> stu[i].score[2];
        cin.ignore(); // 用于忽略输入缓冲区中的换行符，cin没有丢掉换行符
        stu[i].ave = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}
/*
cin.getline(); VS getline();
cin.getline(char[]或者string, size)读取char数组或string类型的输入
getline(cin, string)用于读取string类型的输入*/

void showstu(stuinfo stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "name:" << stu[i].name << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "score:" << stu[i].score[j] << endl;
        }
        cout << "ave:" << stu[i].ave << endl;
    }
}