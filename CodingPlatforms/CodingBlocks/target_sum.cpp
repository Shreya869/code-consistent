#include<iostream>
using namespace std;

void target_sum(int a[], int target, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==target)
			{
				int left=i;
				int right=j;
				if(a[i]<a[j])
				{
					cout<<a[i]<<" and "<<a[j];

				}
				else{
					cout<<a[j]<<" and "<<a[i];
				}
				cout<<endl;
				
			}
			

		}
	}
}

//Brute Force appoach
//O(n^2) time complexity
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
