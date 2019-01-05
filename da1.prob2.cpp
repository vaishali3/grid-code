#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,j=0,n,c=1,index=0,k=0;
	cout<<endl<<"enter size of array"<<endl;
	cin>>n;
	if(n==0)
	return 0;
	cout<<endl<<"enter array";
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		k=1;
		for(j=i+1;j<n;j++)
		{
            if(a[j]==(a[j-1]+1))
            {
                k++;
				if(k>c)
				{
					c=k;
					index=i;
				}	
			}
			else
			break;
            
		}
	}
	cout<<"length is "<<c<<endl;
	cout<<"index is "<<index<<endl;
	return 0;
}
