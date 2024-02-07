#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int arr[] = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    int count = 0;
    int sum = 0;
    for(int i = arr[i] ; i < arr[i] ; i++){

            if (i % 2 == 0)
            {
                count++;
                sum += i;
            }
    }
        cout << "Sum     : "<< sum << endl;
    int avg = sum / count;
        cout << "Average : "<< avg << endl;
    if (sum % 2 == 0)
    {
        cout << "Sum is Even "<< endl;
    }
    else {
        cout << "Sum is Odd ";
    }

}
