//指针所占内存空间
#include<iostream>
using namespace std;

int main()
{
    //指针所占内存空间
    int a = 10;
    int *p = &a;

    cout << "sizeof (int *) = " << sizeof(int *) << endl;
    cout << "sizeof (float *) = " << sizeof(float *) << endl;
    cout << "sizeof (double *) = " << sizeof(double *) << endl;
    cout << "sizeof (char *) = " << sizeof(char *) << endl;


    system("pause");
    return 0;
}