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
    inti(w);inti(h);inti(n);
    int cnt=1;
    while(h%2==0){
        cnt*=2;
        h/=2;
    }
    while(w%2==0){
        cnt*=2;
        w/=2;
    }if(cnt>=n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
return 0;
}
