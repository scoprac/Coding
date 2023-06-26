#include <bits/stdc++.h> // Include every standard library
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

int main()
{
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll n;
		cin >> n ;
		ll ans = 0 ; 
		while(n!=0)
		{
			ans += n;
			n=n/2;
		}
		cout << ans <<  endl;
	}
	
	return 0;
}