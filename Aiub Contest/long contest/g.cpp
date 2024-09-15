#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
        {
            long long n,cnt=0;
            cin>>n;
            vector<int>v(n);
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
            }
            for (int j=0;j<n-1;j++)
            {
                for(int i=0;i<n-1;i++)
                    {
                        if(v[i]>v[i+1])
                        {
                        swap(v[i],v[i+1]);
                       cnt++;
                        }
                }
            }

                cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
        }
}
