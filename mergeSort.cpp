//merge sort

#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &ve, vector<int> leftVe, int leftCount, vector<int> rightVe, int rightCount)
{
	int i=0,j=0,k=0;
	while(i<leftCount && j<rightCount)
	{
		if(leftVe[i] < rightVe[j])
			ve[k++] = leftVe[i++];
		else
			ve[k++] = rightVe[j++];
	}
	while(i<leftCount)
		ve[k++] = leftVe[i++];
	while(j<rightCount)
		ve[k++] = rightVe[j++];
}
void mergesort(vector<int> &ve, int n)
{
	if(n>=2)
	{
		int mid = n/2;
		vector<int> leftVe(mid);
		vector<int> rightVe(n-mid);
		for(int i=0;i<mid;i++)
			leftVe[i] = ve[i];
		for(int i=mid;i<n;i++)
			rightVe[i-mid] = ve[i];
		mergesort(leftVe, mid);
		mergesort(rightVe, n-mid);
		merge(ve, leftVe, mid, rightVe, n-mid);
	}
}

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
	mergesort(ve, n);
	cout<<"Sorted List : ";
	for(int i=0;i<n;i++)
		cout<<ve[i]<<" ";
	cout<<endl;
	return 0;
}