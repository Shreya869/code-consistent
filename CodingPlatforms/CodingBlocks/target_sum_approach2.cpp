//Sort and then use two pointer approach

#include<iostream>
#include<algorithm>
using namespace std;
//insertion sort
/*void insertion_sort(int a[1000], int n)
{
	for(int i=1;i<=n-1;i++)
	{
		int e=a[i];
		int j=i-1;
		while(j>=0 && a[j]>e)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=e;
	}
	
}
*/

void target_sum(int a[1000], int target, int n)
{
	sort(a,a+n);
	int i=0;
	int j=n-1;
	while(i<j)
	{
		if(a[i]+a[j]==target)
		{
			int left=i;
			int right=j;
			if(a[i]<a[j])
			{
				cout<<a[i]<<"and"<<a[j];
			}
			else
			{
				cout<<a[j]<<"and"<<a[i];
			}
			cout<<endl;
		}
		else if(a[i]+a[j]>target)
		{
			j--;
		}
		else if(a[i]+a[j]<target)
		{
			i++;
		}
		
	}
}
int main() {
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cin>>target;

	target_sum(a,target,n);
	return 0;
}
