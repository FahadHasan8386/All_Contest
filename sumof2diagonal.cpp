#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int arr[3][3] = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};

    int sumof1stcorner = 0;
    int sumof2ndcorner = 0;

    for (int i = 0 , j = 0 ;i < 3 ;i++ , j++)
    {
        sumof1stcorner += arr[i][j];
    }
            cout << "Sum of 1st Corner : " << sumof1stcorner << endl;
    for (int i = 0 ,j = 2 ; i < 3 ; i++, j--)
    {
        if (i != j)
        {
            sumof2ndcorner += arr[i][j];
        }
    }
            cout << "Sum of 2nd Corner : " << sumof2ndcorner << endl;

            cout << "Sum of 2nd Diagonal : "<< sumof1stcorner + sumof2ndcorner;
}
