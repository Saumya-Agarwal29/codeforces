/*------------------Honey, you should see me in a crown--------------------*/
#include<bits/stdc++.h>

#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
#define lli(n) long long n; cin>>n;
#define li(n) long n; cin>>n;
#define inti(n) int n;cin>>n;
#define CC int test;\
cin>>test;\
while(test--)

using namespace std;

/*------------Every fairy tale needs a good old-fashioned villain----------------*/

int main()
{
FAST;
CC
{
    inti(n);
    long a[n+1],m=0;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=n;i>0;i--)
    {
        if(a[i]+i<=n)
            a[i]+=a[a[i]+i];
        m=max(m,a[i]);
    }cout<<m<<'\n';
}
return 0;
}
