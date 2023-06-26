#include <bits/stdc++.h> // Include every standard library
using namespace std;
 
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

int main()
{
	LL t;
	cin >> t;
	while(t--)
	{
		LL n;
		cin>>n;
		vector<LL> vec;
		LL count =0;
		bool sign = true;
		LL ans =0;
		for(LL i=0;i<n;i++)
		{
			LL x;
			cin >> x;
			vec.push_back(x);
			ans += abs(x);
		}
		
		for(LL i=0;i<n;i++)
		{
			if(vec[i]<0 && sign)
			{
				sign =false;
				count++;
			}
			else if(vec[i]>0)
			{
				sign = true;
			}
		}
		cout << ans <<" " << count << endl;
	}
	
}