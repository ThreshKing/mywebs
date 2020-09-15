//常量指针与指针常量
#include<iostream>
using namespace std;

int main()
{
    //const修饰指针   常量指针：指针的指向可以修改，但是指针指向的值不可以修改
    int a = 10;
    int b = 10;
    const int * p1 = &a;
    //*p1 = 20;错误
    //p1 = &b;正确


    //const修饰常量   指针常量：指针的指向不可以修改，但是指针指向的值可以修改
    int * const p2 = &a;
    //*p2 = 20;正确
    //p2 = &b;错误


    //const修饰指针与常量    都不可以修改
    const int * const p3 = &a;
    //*p3 = 20;错误
    //p3 = &b;错误

    
    system("pause");
    return 0;
}