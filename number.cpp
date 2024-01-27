
#include<iostream>
using namespace std;
int main (){

    int n ;

        cout << "Enter The Number : " ;
        cin >> n ;

    for ( int i = 1 ; i <= 10 ; i++){

        int mult = n * i;

        cout << n << " * " << i << " = " << mult;

        cout << endl;
    }

}
