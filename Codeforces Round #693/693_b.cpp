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
    int one=0,two=0;
    for(int i=0;i<n;i++)
    {
        inti(x);
        if(x==1)
            one++;
        else
            two++;
    }if(one==0 && two%2==1)
        cout<<"NO\n";
    else if(one%2==0)
        cout<<"YES\n";
    else cout<<"NO\n";

}
return 0;
}
