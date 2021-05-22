//find the no.of repeated elements in given array
#include<iostream>
using namespace std;
int main()
{
	int n,arr[n];
	int maxi=0,result;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			count+=1;
		}

		if(count>maxi)
		{
			maxi=count;
		    result=arr[i];
     	}
	}
    cout<<result;
}
