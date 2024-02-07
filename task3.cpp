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

        int Max = v[0];
        int Min = v[0];

        for (int i = 0 ; i < v.size() ; i++)
        {

            if (v[i] > Max && v[i] != user_input)
            {
                Max = v[i];
            }
            if (v[i] < Min && v[i] != user_input)
            {

                Min = v[i];
            }
        }
            cout << "Maximum Value : " << Max << endl;
            cout << "Minimum Value : " << Min << endl;
            cout << "Difference Between max to min : " << Max - Min << endl;





}
