//Insertion sort
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
	for(int j=1;j<n;j++)
	{
		int key = ve[j];
		int i= j-1;
		while(i>=0 && ve[i]>key)
		{
			ve[i+1] = ve[i];
			i--;
		}
		ve[i+1] = key;
	}
	cout<<"Sorted List : ";
	for(int i=0;i<n;i++)
		cout<<ve[i]<<" ";
	cout<<endl;
	return 0;
}