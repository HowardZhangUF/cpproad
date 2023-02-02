#include <iostream>
using namespace std;

int sum(int num)
{
	
	//sum = num + sum(num-1); 	[Error] cannot convert 'int' to 'int(int)' in assignment
	
	if(num!=0)
	{
		return (num + sum(num-1));
	}
	else
	{
		return 0;
	} 
	
}

int main()
{
	int num;
	cout<<"enter a num that you want to sum up: "<<endl;
	cin>>num;
	sum(num);//an int being returned
	int total = sum(num);
	cout<<total<<endl;
}
