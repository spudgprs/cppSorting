//enhanced version of bubble sort

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n=0;
	cout<<"Enter the value of N: ";
	cin>>n;
	vector<int> ve(n);
	for(int i=0;i<n;i++)
	{
		cout<<"Element "<<(i+1)<<" : ";
		cin>>ve[i];
	}
	cout<<"Initial List : ";
	for(int i=0;i<n;i++)
		cout<<ve[i]<<" ";
	cout<<endl;
	//sort
	int flag =0; //this makes the code enhanced
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(ve[j]>ve[j+1])
			{
				int temp = ve[j];
				ve[j] = ve[j+1];
				ve[j+1] = temp;
				flag =1;
			}
			if(flag ==0)
				break;
		}
	}
	cout<<"Sorted List : ";
	for(int i=0;i<n;i++)
		cout<<ve[i]<<" ";
	cout<<endl;
	return 0;
}