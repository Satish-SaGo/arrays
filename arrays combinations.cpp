#include<iostream>
using namespace std;
int main()
{
	int n,sum,flag=0,count=0;
	cout<<"enter size of array :";
	cin>>n;
	cout<<"enter size :";
	cin>>sum;
	int a[n];
	//cout<<"enter array element :";
	for(int i=0;i<n;i++)
	{
		cout<<"enter array element :";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)                       //a={1 2 3 }
		{                                  
			for(int k=i;k<=j;k++)                 // 1, 1 2, 1 2 3, 2, 2 3, 3
			{
				cout<<a[k];                        // sum of the 2 ele in the sub array is = given sum or not
			  count=count+a[k];
			 // cout<<endl;
		    }
		    cout<<endl;
		    if(count==sum)
		    {

		    	flag=1;
		    	break;
			}
			count=0;
		}
	}
	if(flag!=1)
	cout<<"NO";
	else
	cout<<"YES!";
}
	
	

