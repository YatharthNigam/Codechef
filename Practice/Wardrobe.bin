#include<bits/stdc++.h>
using namespace std;

int swaps(string s, int n)
{
	int ans=0;
	for(int i=0,j=n-1,l=0,r=0;i<=j;)
	{
		if(l<r)
		{
			if(s[i++]=='#')
				l++;
			else
				ans+=l;
		}
		else
		{
			if(s[j--]=='#')
				r++;
			else	ans+=r;
		}
	}
	return ans;
}

int main()
{
	int n;
	string s;
	cin>>n>>s;
	int ans=swaps(s,n);
	cout<<ans<<endl;
	return 0;
}