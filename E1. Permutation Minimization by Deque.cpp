#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

void print(std::vector <int> const &a) 
{
   for(int i=0; i < a.size(); i++)
   cout << a.at(i) << ' ';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		int o=a[0];
		vector<int> v(a,a+1);
		for(int j=1;j<n;j++)
		{
			if(a[j]<v[0])
			{
				v.insert(v.begin(),a[j]);
			}
			else
			{
				v.push_back(a[j]);
			}
		}
		print(v);
		cout << endl;
	}
	return 0;
}
