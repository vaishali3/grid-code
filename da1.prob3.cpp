#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,j=0,k=0,x=0,y=0;
	cin>>m>>n;
	int a[m][n];
	for(i=0;i<m;i++)
    	for(j=0;j<n;j++)
		   cin>>a[i][j];
	 j=0;
	for(i=0;i<m;i++)
	{
		for(;j<n;j++)
			cout<<" "<<a[i][j];
		j--;m--;k=i+1;
		
		for(;k<=m;k++)
			cout<<" "<<a[k][j];
		k--;n--;
		
		for(j=j-1;j>=x;j--)
			cout<<" "<<a[k][j];
		x++;j++;
		
		for(k=k-1;k>y;k--)
			cout<<" "<<a[k][j];
		y++;j++;
	}
	return 0;
}
