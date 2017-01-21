//quick sort
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> & ve, int start, int end)
{
	int pi = start, pivot = end;
	for(int i=start; i<end;i++)
		if(ve[i] <= ve[pivot])
		{
			int temp = ve[i];
			ve[i] = ve[pi];
			ve[pi] = temp;
			pi++;
		}
	// swap pivot and pi
	int temp = ve[pivot];
	ve[pivot] = ve[pi];
	ve[pi] = temp;
	return pi;

}
void quicksort(vector<int> & ve, int start, int end)
{
	if(start<end)
	{
		int pivot = partition(ve, start, end);
		quicksort(ve, start, pivot-1);
		quicksort(ve, pivot+1, end);
	}
}
int main()
{
	int n=0;
	cout<<"Enter the number of elements N: ";
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
	quicksort(ve,0, n-1);
	cout<<"Sorted List : ";
	for(int i=0;i<n;i++)
		cout<<ve[i]<<" ";
	cout<<endl;
	return 0;
}