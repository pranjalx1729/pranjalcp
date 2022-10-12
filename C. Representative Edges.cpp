#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		if(n>=3)
		{
			int ans=0;
			for(int i=0;i<n;i++)
			{
				int mx=0;
				map<pair<int,int>,int> m;
				for(int j=0;j<n;j++)
				{
					if(i==j)
					{
						continue;
					}					
					int h = (a[j]-a[i]), k = (j-i);
					int hcf = __gcd(abs(h),abs(k));
					pair<int,int> p;
					p = make_pair(h/hcf,k/hcf);
					m[p]++;
					mx = max(mx,m[p]);
				}
				ans = max(mx+1,ans);
			}
			cout << (n-ans) << "\n";
		}
		else
		{
			cout << 0 << "\n";
		}
	}
	return 0;
}

