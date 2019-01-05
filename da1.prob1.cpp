#include<bits/stdc++.h>
using namespace std;
int m,n;
	vector< vector<char> >x;
	vector<char>y;
bool res(string str,int a,int b,int s)
{
	if(a<0 || b<0 || a>m-1 || b>n-1)
	  return false;
	if(x[a][b]==str[s])
	{
		x[a][b]='1';
		if(s==(str.length()-1))
		return true;
		if(res(str,a,b-1,s+1))
		return true;
		if(res(str,a,b+1,s+1))
		return true;
		if(res(str,a-1,b,s+1))
		return true;
		if(res(str,a+1,b,s+1))
		return true;	
		}
	return false;
}
int main()
{
	string str;
	cout<<"enter size"<<endl;
	cin>>m>>n;
	cout<<"enter grid"<<endl;
	char k;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>k;
			y.push_back(k);
		}
		x.push_back(y);
				y.clear();
	}
	cout<<"enter string"<<endl;
	cin>>str;
	bool c=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(res(str,i,j,0))
			{
				c=1;
				break;
			}	
		}
		if(c==1)
		break;
	}
	if(c)
	cout<<endl<<"true";
	else
	cout<<endl<<"false";
	return 0;
}
