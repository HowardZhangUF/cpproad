#include<iostream>
#include<D:\OneDrive\桌面\cpp road\myheader1.h>
using namespace std;

int main(){
	
	int count;
	cout<<"輸入班級數:";
	cin>>count;	
	double * ave = new double[count];
	
	for(int j = 0;j<count;j++){
		int num;
		cout<<"輸入班級人數:"<<endl;
		cin>>num;
		
		
		int * score = new int[num];/*important to know how to declare this. can turn to matrix for the simple example*/
		for(int i = 0;i<num;i++){
			cout<<"輸入成績:";
			cin>>score[i];	
		}
		ave[j] = getaverage(score,num);
		delete score;
	}
	
	for (int j= 0;j<count;j++){
		cout<<ave[j]<<endl;
	}

	
	
}
