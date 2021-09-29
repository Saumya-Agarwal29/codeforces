#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 10;
int n, d, a[maxn];

pair<int, int> f(double x)
{
    double psum[n + 1];
    double min[n + 1];
    int ll[n + 1];
    psum[0] = a[0] - x;
    min[0] = psum[0];
    ll[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        psum[i] = psum[i - 1] + a[i] - x;
        if (psum[i] < min[i - 1])
        {
            min[i] = psum[i];
            ll[i] = i;
        }
        else
        {
            min[i] = min[i - 1];
            ll[i] = ll[i - 1];
        }
    }
    for (int i = d; i <= n; i++)
    {
        if (psum[i] >= min[i - d])
        {
            int l = ll[i - d] + 1;
            return {l, i};
        }
    }
    return {-1, -1};
}

int main()
{
    cin >> n >> d;
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    double low = -1, high = 1e2 + 1;
    pair<int, int> ans, ch;
    for (int i = 0; i < 50; i++)
    {
        double mid = (high + low) / 2;
        ch = f(mid);
        if (ch.first == -1)
            high = mid;
        else
        {
            low = mid;
            ans = ch;
        }
    }
    cout << ans.first << " " << ans.second << endl;
    return 0;
}