#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


int dx[] = {-1, +1};  // up and down movement
int dy[] = {-1, +1};  // left and right movement

int n;
bool valid(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= n;
}

int main() {
    optimize();
    int tt;
    cin >> tt;

    while(tt--) {
        cin >> n;
        int a[n+1][n+1];

        if(n == 1) {
            cout << 0 << endl;
            continue;
        }

        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= n; ++j) {
                cin >> a[i][j];
            }
        }

        int ans = 0;

        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= n; ++j) {
                for(int k = 0; k < 2; ++k) {
                    int up = i + dx[k];
                    int dn = j + dy[k];
                    if(k == 0)
                    {
                        f = 1
                    }

                    if(valid(up, dn) && a[up][dn] < 0) {
                        ans += (-1) * a[up][dn];  // Add the absolute value of the negative number
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
