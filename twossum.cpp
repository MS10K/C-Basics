#include<iostream>
using namespace std;
int main()
{
	int a[100],target,n;
	cout<<"Enter the size of an array:";
	cin>>n;
	cout<<"Enter a target:";
	cin>>target;
	cout<<"Enter an array:";
	for(int i=0;i<n;i++)
	{
	  cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
	 for(int j=0;j<n-1;j++)
	 { 
	  if(a[i]+a[j]==target)
	  {
	    cout<<i;
	  }
     }
    }
return 0;	 
}