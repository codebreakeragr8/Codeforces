#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	// cout<<std::flush;
    	string a,b;
    	cin>>a>>b;
    	int n = a.size();
    	int m = b.size();
    	vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    	for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=m;j++)
    		{
    			if(a[i-1] == b[j-1])
    				dp[i][j] = 1+dp[i-1][j-1];
    			else
    				dp[i][j] = 0;
    		}
    	}

    	int ans = 0;
    	for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=m;j++)
    			ans = max(ans , dp[i][j]);
    	}
    	cout<<n+m-2*ans<<'\n';
    }

    return 0;
}