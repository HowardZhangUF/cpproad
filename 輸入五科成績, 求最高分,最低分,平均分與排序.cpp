#include<iostream>
using namespace std;

int main(){
int score[5];
		int length = 5;
		for(int i=0;i< length;i++){
			cout<<"請輸入分數";
			cin>>score[i]; 
		}
		cout<<"你輸入了: ";
		for(int i=0;i< length;i++){
			cout<<score[i]<<"\t";
		}
	/*	int biggest = score[0];
		for(int i=1;i< length;i++){
				if(biggest<score[i]){
					biggest = score[i] ;
				
			}
		}cout<<"biggest"<<biggest<<endl; */
		int biggerindex = 0;
		cout<<"排序: "; 
		for(int i=0;i< length;i++){
			if(score[biggerindex]<score[1]){
				int	temp = score[biggerindex];
				score[biggerindex] = score[i];
				score[i] = temp;
			}
			/*cout<<"bigger"<<temp<<endl; */ 
			cout<<score[i]<<"\t";
			
		}
		
		
		
}
