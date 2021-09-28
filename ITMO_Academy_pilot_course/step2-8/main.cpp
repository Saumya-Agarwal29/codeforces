#include<bits/stdc++.h>

using namespace std;
long long h,l;

bool good(long long n)
{
	return h/l>=n;	
}

int main()
{
	string s;
	cin>>s;
	long long B=0,ss=0,C=0,aa,bb,cc,dd,ee,ff,l,r,mid;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='B')
			B++;
		else if(s[i]=='S')
			ss++;
		else
			C++;
	}

	cin>>aa>>bb>>cc;
	cin>>dd>>ee>>ff;
	cin>>h;
	
	if(B>0)	
		h+=(aa*dd) , l+=(B*dd);
	if(ss>0)
		h+=(bb*ee) , l+=(ss*ee);
	if(C>0)	
		h+=(cc*ff) , l+=(C*ff);
	l=0,r=1e18;
	cout<<h/l;	
	return 0;
}
