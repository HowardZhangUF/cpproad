#include<iostream>
#include<D:\OneDrive\�ୱ\cpp road\myheader1.h>
using namespace std;

int main(){
	
	int count;
	cout<<"��J�Z�ż�:";
	cin>>count;	
	double * ave = new double[count];
	
	for(int j = 0;j<count;j++){
		int num;
		cout<<"��J�Z�ŤH��:"<<endl;
		cin>>num;
		
		
		int * score = new int[num];/*important to know how to declare this. can turn to matrix for the simple example*/
		for(int i = 0;i<num;i++){
			cout<<"��J���Z:";
			cin>>score[i];	
		}
		ave[j] = getaverage(score,num);
		delete score;
	}
	
	for (int j= 0;j<count;j++){
		cout<<ave[j]<<endl;
	}

	
	
}
