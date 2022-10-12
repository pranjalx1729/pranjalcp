#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n,count=0;
		cin >> n;
		int a;
		pair<int,int> p[n];
		vector< pair <int,int> > v;
		for(int i=0;i<n;i++)
		{
			cin >> a;
		    p[i] = {a,i+1};
		}
		sort(p,p+n);
		for(int i=(n-1);i>=0;i--)
		{
			for(int j=(i-1);j>=0;j--)
			{
				int m = min(p[i].first,p[j].first);
				count = count + m;
				p[i].first = p[i].first - m;
				p[j].first = p[j].first - m;
				while(m--)
				{
					v.push_back( make_pair(p[j].second,p[i].second) );
 				}
			}
		}
		cout << count << "\n";
		for(int i=0;i<v.size();i++)
		{
	        cout << v[i].first << " " << v[i].second << endl;
		}
	}
	return 0;
}
