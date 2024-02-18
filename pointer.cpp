/*
#include <iostream>
using namespace std;

int main ()
{
    int x = 5 ;
    int *p = &x;

        cout << x << endl;//value of x
        cout << &x << endl;//address of x
        cout << p << endl;//address of x
        cout << *p << endl;//value of x
}
*/
#include <iostream>
using namespace std ;
int main ()
{
    int num1 = 10;
    int num2 = 20;

    int *p1 ,*p2;
    p1 = &num1;
    p2 = &num2;
    //value of num1 and num2
    int sum = *p1 + *p2;

    cout << sum << endl;
    cout << p1 << endl;


}
