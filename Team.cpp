#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,y,z;
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		if((x+y+z)>1)
			count++;
	}
	cout<<count;
	return 0;
}