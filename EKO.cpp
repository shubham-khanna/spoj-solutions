//code contributed by shubham khanna www.github.com/shubham-khanna
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
bool f(ll a[],ll n,ll m,ll h)
{
	ll cutted=0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]>h)
		{
			cutted+=a[i]-h;
		}
	}
	return cutted>=m;
}
ll bs(ll a[],ll n,ll m)
{
	ll s=0;
	ll e=a[n-1];
	ll h=0;
	while(s<=e)
	{
		ll mid=(s+e)/2;
		if(f(a,n,m,mid))
		{
			s=mid+1;
			if(mid>h)
			{
				h=mid;
			}
		}
		else
		{
			e=mid-1;
		}
	}
	return h;
}
int main() {
	// your code goes here
	ll n,m;
	cin>>n>>m;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<bs(a,n,m);
	return 0;
}
