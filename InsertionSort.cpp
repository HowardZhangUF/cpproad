#include<iostream>

using namespace std;

void insertionsort(int arr[])
	{
		int i  , j = 0, ,key,temp;
		for(i = 1 ; i<n ; i++)
		{
			key = arr[i];
			j = i-1;
			
			while(j >= 0 && arr[j]>key)
			{
			/*	temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;*/
				arr[j+1] = arr[j];
				j= j-1;
				
			}
			arr[j+1] = key;
		}
	}
		

	

int main()
{
	int n;
	int myarr[n];
	cout<<"length of the arr is  : "<<endl;
	cin>>n;
	
	cout<<"input an array to sorted : "<<endl;
	//cin>>myarr;
	for(int i = 0;i<n;i++)
	{
		cin>>myarr[i];
	}
	//cout<<"unsorted arr: "<<myarr[n]<<endl;
	cout<<"unsorted arr: "<<endl;
	for(int i = 0;i<n;i++)
	{
		cout<<myarr[i]<<" ";
	}
	insertionsort(myarr) ;
	cout<<endl<<"sorted arr: "<<endl;
	for(int i = 0;i<n;i++)
	{
		cout<<myarr[i]<<" ";
	}
	
} 
