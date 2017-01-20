//selection sort 

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
	for(int i=0;i<n-1;i++)
	{
		int min = i;
		for(int j=i+1;j<n;j++)
			if(ve[min]>ve[j])
				min = j;
		//swap min and i
		int temp = ve[min];
		ve[min] = ve[i];
		ve[i] = temp;
	}
	cout<<"Sorted List : ";
	for(int i=0;i<n;i++)
		cout<<ve[i]<<" ";
	cout<<endl;
	return 0;
}