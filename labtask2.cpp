#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int>v = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};

    v.insert(v.begin(),300);

    v.insert(v.begin()+4 ,200);

    v.push_back(100);

    cout <<"Modifier array is : " ;

    for (int num : v)
    {
        cout << num << "  " ;
    }
}
