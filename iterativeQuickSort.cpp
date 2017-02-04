//implementing quick sort in iterative method
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &ve, int start, int end)
{
	int pi = start, pivot = end;
	for(int i=start;i<end;i++)
		if(ve[i]<=ve[pivot])
		{
			//swap ve[pi] and ve[i]
			int temp = ve[pi];
			ve[pi] = ve[i];
			ve[i] = temp;
			pi++;
		}
	//swap ve[pi] and ve[pivot]
	int temp = ve[pi];
	ve[pi] = ve[pivot];
	ve[pivot] = temp;
	return pi;
}
void quick_sort(vector<int> &ve, int start, int end)
{
	vector<int> stack(ve.size());
	int top = -1;
	stack[++top] = start;
	stack[++top] = end;
	while(top>=0)
	{
		end = stack[top--];
		start = stack[top--];
		int pi = partition(ve, start, end);
		if(pi-1 >start)
		{
			stack[++top] = start;
			stack[++top] = pi-1;
		}
		if(pi+1 < end)
		{
			stack[++top] = pi+1;
			stack[++top] = end;
		}
	}
}
void print(vector<int> ve)
{
	for(int i=0;i<ve.size();i++)
		cout<<ve[i]<<" ";
	cout<<endl;
}
int main()
{
	int n=0;
	cout<<"Enter the value of N: ";
	cin>>n;
	vector<int> ve(n);
	for(int i=0;i<n;i++)
	{
		cout<<(i+1)<<" element: ";
		cin>>ve[i];
	}
	cout<<"Inserted List: ";
	print(ve);
	quick_sort(ve, 0, ve.size()-1);
	cout<<"Sorted List: ";
	print(ve);
	return 0;
}