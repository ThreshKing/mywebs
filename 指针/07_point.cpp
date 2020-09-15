//指针和函数
#include<iostream>
using namespace std;

//实现两个函数进行交换
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "swap01 a = " << a << endl;
    cout << "swap01 b = " << b << endl;
}

void swap02(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "swap02 a = " << *p1 << endl;
    cout << "swap02 b = " << *p2 << endl;
}

int main()
{
    //1、值传递
    int a = 10;
    int b = 20;
    swap01(a, b);
    cout << "值传递 a = " << a << endl;
    cout << "值传递 b = " << b << endl << endl; 

    //2、地址传递，地址传递可以修饰实参
    swap02(&a, &b);
    cout << "地址传递 a = " << a << endl;
    cout << "地址传递 b = " << b << endl << endl;


    system("pause");
    return 0;
}