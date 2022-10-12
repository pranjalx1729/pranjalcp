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
        int a,b,c; cin >> a >> b >> c;
        int k = (a+c),h=(b+b-a),j=(b+b-c);
        if(((k%(2*b))==0) && ((k%2)==0))
        {
            cout << "YES" << "\n";
        }
        else if(h%c==0)
        {
            cout << "YES" << "\n";   
        }
        else if(j%a==0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
