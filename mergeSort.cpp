#include<iostream>
using namespace std;



void merge(int arr[], int l, int m, int r, int size)
{
   	int i = l;
	int j = m+1; // traverse variables for RL arr and temp
	int k = l;
	//int temp[5];//int temp[];
	int temp[size];
	while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    /* Copy the remaining elements of first half, if there are any */
   	while(i<=m)
		{
			temp[k] = arr[i];
			i++;
			k++;
			}	

		while(j<=r)
		{
			temp[k] = arr[j];
			j++;
			k++;
			}
    /* Copy the temp array to original array */
    for(int s= l;s<=r;s++)
		{
			arr[s] = temp[s];
			
			}
    
}

/* l is for left index and r is
right index of the
sub-array of arr to be sorted */

/*void merge(int arr[],int l,int r,int m, int size)
{
	int i = l;
	int j = m+1; // traverse variables for RL arr and temp
	int k = l;
	//int temp[5];//int temp[];
	int temp[size];
	while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
	
		while(i<=m)
		{
			temp[k] = arr[i];
			i++;
			k++;
			}	

		while(j<=r)
		{
			temp[k] = arr[j];
			j++;
			k++;
			}
			
		for(int s= l;s<r;s++)
		{
			arr[s] = temp[s];
			
			}	
	}
	*/

void mergeSort(int arr[],int l,int r, int size)
{
	if(l<r)
	{
		int m = (l+r)/2;
		mergeSort(arr,l, m, size);
	 	mergeSort(arr, m+1,r, size);
	 	merge( arr,l,m,r, size); //void merge(int arr[],l,m,r);
	}
}
	


int main()
{
	cout << "Enter size of array: " << endl;
    int size;
    cin >> size;
    int arr[size];
	
	cout << "Enter " << size << " integers in any order: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
	cout<<"before merge sort"<<endl;
	for(int i = 0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	//merge sort function
	mergeSort(arr,0,(size - 1), size);
	cout<<"after merge sort"<<endl;
	for(int i = 0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
	
}

/*#include<iostream>
using namespace std;

void merge(int arr[],int l,int r,int m)
{
	int i = l;
	int j = m+1; // traverse variables for RL arr and temp
	int k = l;
	int temp[5];//int temp[];
	
	while(i<=m&&j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k] = arr[i];
			k++;
			i++;
		}else
		{
			temp[k] = arr[j];
			k++;
			j++;	
		} 
	
	}
	
		while(i<=m)
		{
			temp[k] = arr[i];
			i++;
			k++;
			}	

		while(j<=r)
		{
			temp[k] = arr[j];
			j++;
			k++;
			}
			
		for(int s= l;s<r;s++)
		{
			arr[s] = temp[s];
			
			}	
	}
	

void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m = (l+r)/2;
		mergeSort(arr,l, m);
	 	mergeSort(arr, m+1,r);
	 	merge(arr,l,m,r); //void merge(int arr[],l,m,r);
	}
}
	


int main()
{
	int arr[5];
	
	cout<<"enter an array"<<endl;
	for(int i = 0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"before merge sort"<<endl;
	for(int i = 0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	//merge sort function
	mergeSort(arr,0,4);
	cout<<"after merge sort"<<endl;
	for(int i = 0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}*/
