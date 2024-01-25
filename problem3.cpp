#include <iostream>
using namespace std ;
int main (){

    int num [4] = {10 ,20 , 50 ,60};

    int num2 [4] = {12 ,22 ,52 ,72};

    int num3 = num[0] + num2[0];

    cout << "Result 1 : " << num3 << endl;

    for ( int i = 0 ; i <= 3 ; i++){

        int result = num[i] + num2[i];

        cout << "result : " << result <<endl;
    }



}
