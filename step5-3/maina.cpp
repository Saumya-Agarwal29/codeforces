#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define loop(a) for (int i = 0; i < a; i++)
#define loopv(i, a) for (int i = 0; i < a; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

long long n,k;

vector<ll> a, b;

bool good(ll M)
{
    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= M)
            continue;
        count += lower_bound(b.begin(), b.end(), M - a[i]) - b.begin();
    }

    return count < k;
}

/*
ll find_sum(ll n, vector<ll>& a, vector<ll>& b, ll M) {
    int idx = 
}
*/

int main(void)
{
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll L = 0;
    ll R = 1e18;
    while (R > L + 1)
    {
        ll M = (L + R) / 2;
        if (good(M))
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }

    cout << L << endl;

    return 0;
}