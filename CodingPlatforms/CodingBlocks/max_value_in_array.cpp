#include<iostream>
#include <climits>
using namespace std;
int maxint(int arr[1000], int n)
{
	int maxval=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxval)
		{
			maxval=arr[i];
		}
	}
	return maxval;
}

int main() {
	int n;
	cin>>n;

	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

   int x=maxint(a,n);
   cout<<x;
	
	return 0;
}
