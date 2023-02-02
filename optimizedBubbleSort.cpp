#include<iostream>

using namespace std;

void bubblesort(int arr[])
{
	int round = 0;
	for(int i =0;i<5;i++)
	{
		int flag = false;
		round++;
		for(int j = 0;j<(5-i-1);j++)
		{
			
			if(arr[j]>arr[j+1])
			{
				//arr[j] = arr[j+1];
				flag = true;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		} 
		//j = 0;
		if(flag == false)
		{
			break;
		} 
	}
	cout<<"No of round : "<<round<<endl;
}




int main()
{
	int myarr[5];
	cout<<"enter a array with 5 element: "<<endl;
	for(int i= 0;i<5;i++)
	{
		cin>>myarr[i];	
	}
	cout<<"unsorted array"<<endl;
	for(int i= 0;i<5;i++)
	{
		cout<<myarr[i]<<" ";	
	}
	cout<<endl;
	bubblesort(myarr);
	//cout<<endl<<"round : "<<round<<endl;
	cout<<endl<<"sorted array"<<endl;
	for(int i= 0;i<5;i++)
	{
		cout<<myarr[i]<<" ";	
	}
		
	
	
		
}
