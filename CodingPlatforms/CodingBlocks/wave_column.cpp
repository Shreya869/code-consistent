#include<iostream>
using namespace std;
void wave_print(int a[][1000], int m, int n)
{
	for(int j=0;j<n;j++)
	{
		if(j%2==0)
		{
			for(int i=0;i<m;i++)
			{
				cout<<a[i][j]<<", ";
			}
		}
		else
		{
			for(int i=m-1;i>=0;i--)
			{
				cout<<a[i][j]<<", ";
			}
		}
	}
	cout<<"END";
}
int main() {
	
	

	int a[1000][1000]={0};
	int m,n;
	cin>>m>>n;

	for(int i=0;i<m;i++)//row
	{
		for(int j=0;j<n;j++) //column
		{
			cin>>a[i][j];
		}
	}

	wave_print(a,m,n);

	return 0;
}
