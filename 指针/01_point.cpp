#include<iostream>
using namespace std;

int main()
{
    //1、定义指针
    int a = 10;
    int * p;
    p = &a;
    cout << "a的地址为：" << &a << endl;
    cout << "指针p为：" << p << endl;

    //2、使用指针
    //指针前加一个*代表解引用，找到指针指向的内存中的数据
    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;


    system("pause");
    return 0;
}