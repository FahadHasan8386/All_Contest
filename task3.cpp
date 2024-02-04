#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int>v;

    int n ;

        cout << "How many element do you need : ";
        cin >> n;

        for (int i = 0 ; i < n ; i++)
        {
            int a ;
            cin >> a;
            v.push_back(a);

        }
        int user_input;
            cout << "Inputed number is present in the array : ";
            cin >> user_input;

        int cnt = 0;

        for (int i = 0 ; i < n ; i++){

            if (v[i] == user_input )
            {

                v.erase(v.begin()+i);
                cnt++;
            }
        }
        for (int i = 1 ; i <= cnt ;i++)
        {
            v.push_back(user_input);
        }
        cout << "Modified number is : ";

        for (int i = 0 ; i < n ; i++)
        {
            cout << v[i] << " " ;
        }
        cout << endl;



}
