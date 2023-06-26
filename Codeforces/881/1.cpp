#include <bits/stdc++.h>

using namespace std;


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> vec;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			vec.push_back(x);
		}
		sort(vec.begin(),vec.end());
		int ans=0;
		for(int i=0;i<n/2;i++)
		{
			ans+= vec[n-i-1] - vec[i]; 
		}
		cout<< ans << endl;
	}
}