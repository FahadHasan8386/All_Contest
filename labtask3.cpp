#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int num[3][3] = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 };
    int num2[3][3] = {2 ,2 ,3 ,2 ,3 ,6 ,3 ,8 ,3 };
    int sum[3][3];

    for (int i = 0 ;i < 3 ; i++)
    {
        for ( int j = 0 ; j < 3 ;j++)
        {
            sum[i][j] = num[i][j] + num2[i][j];
        }
    }
            cout << "Result " << endl;

     for (int i = 0 ;i < 3 ; i++)
    {

        for ( int j = 0 ; j < 3 ;j++)
        {
            cout << sum[i][j] << "  " << endl;
        }

    }

}
