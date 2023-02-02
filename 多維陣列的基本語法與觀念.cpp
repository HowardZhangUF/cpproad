#include<iostream>
using namespace std;

int main(){
	/*int sales[3][4];
	sales[0][0] = 120;
	sales[1][1] = 240;
	cout<<sales[1][1];*/
	
/*	int array[4][3] = {{1,2,3},{4,5,6},{7,8,9},{1,2,3}};
	for(int i = 0;i<4;i++){
		for(int j = 0;j<3;j++){
	
			cout<<array[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	return 0;*/
	int number = 1;
	int array[4][5];
	for(int i = 0;i<4;i++){
		for(int j = 0;j<5;j++){
			array[i][j] =number++; 
	} 
}
	for(int i = 0;i<4;i++){
		for(int j = 0;j<5;j++){
			cout<<array[i][j]<<"\t";
	}
	cout<<endl;
	}
    
   
	
    
    
    cout<<"translate"<<endl;
     for(int i = 0;i<2;i++){
		for(int j = 0;j<5;j++){
			int temp = array[i][j];
		    array[i][j] = array[3-i][j];
		    array[3-i][j] = temp;
		
		}
	}
    
	for(int i = 0;i<4;i++){
		for(int j = 0;j<5;j++){
			cout<<array[i][j]<<"\t";
	}
	cout<<endl;
		

}
}
