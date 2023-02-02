#include<iostream>
using namespace std;
#include<D:\OneDrive\桌面\cpp road\MyHeader.h>
int main(){
/*	int number[5];
	number[0] = 10; 
	number[1] = 20; 
	number[2] = 30; 
	number[3] = 40; 
	number[4] = 50; 
	cout<<number[0]<<endl;
	int ages[] = {15,45,64,87,45};
	cout<<ages[4]<<endl;
	
	cout<<sizeof(number)<<endl;
	cout<<sizeof(number[0])<<endl;	*/
	
/*	int agg[5];
	int  length  = 5;
	for(int i = 0;i< length ; i++){
		agg[i] = (i+1);
	}
	for(int i = length-1;i>=0;i--)
	{
		cout<<agg[i]<<endl;
	}*/
	
/*	int score[5];
	int length = 5;
	for(int i=0;i< length;i++){
		cout<<"請輸入分數";
		cin>>score[i]; 
	}
	cout<<"你輸入了: ";
	for(int i=0;i< length;i++){
		cout<<score[i]<<"\t";
	}
	int biggest = score[0];
	for(int i=1;i< length;i++){
			if(biggest>score[i]){
				biggest = score[i] ;
			
		}
	}
	cout<<"biggest"<<biggest<<endl; 
	int smallest = 0;
	for(int i= 1 ;i< length;i++){
			if(score[smallest]>score[i]){
				biggest = score[i] ;
			}
}
	cout<<"biggest"<<biggest<<endl; 
	int total = 0;
	for (int i = 0;i<length;i++){
		total+=score[i];
	}
	cout<<"total"<<total;
	cout<<"mean"<<total / 5;
	
}
*/
/*	int score[5];
		int length = 5;
		for(int i=0;i< length;i++){
			cout<<"請輸入分數";
			cin>>score[i]; 
		}
		cout<<"你輸入了: ";
		for(int i=0;i< length;i++){
			cout<<score[i]<<"\t";
		}
		int biggest = score[0];
		for(int i=1;i< length;i++){
				if(biggest<score[i]){
					biggest = score[i] ;
				
			}
		}cout<<"biggest"<<biggest<<endl; 
		cout<<score[i]<<endl;*/
		int a = 1;
		changeValue(a);
		cout << a <<endl;
		
		int array[] = {1,2,3,4,5};
		changeArrayValue(array, 5);
		for(int i = 0;i < 5; i++){
			cout<<array[i]<<endl;  
		}
}
