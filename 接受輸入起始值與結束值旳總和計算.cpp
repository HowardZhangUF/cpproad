#include<iostream>
using namespace std;

/*int main(){
	cout<<"begin = ";
	int s ;
	cin>>s;
	cout<<"ending = ";
	int e ;
	cin>>e;
	
	int total;
	for(s;s<=e;s++){
		total += s;
		cout<<total<<endl;
		
	}
}*/

/*int main(){
	cout<<"begin = ";
	int s ;
	cin>>s;
	cout<<"ending = ";
	int e ;
	cin>>e;
	
	int total;
	if(s<=e){
		for(s;s<=e;s++){
		total += s;
		cout<<total<<endl;
		
	}

	}
	else{
		cout<<"wrong enter"<<endl;
	}	
}*/

/*int main(){
	cout<<"begin = ";
	int s ;
	cin>>s;
	cout<<"ending = ";
	int e ;
	cin>>e;
	
	int total = 0;
	
		for(int a= s;a<=e;a++){
			total += a;
		}
		
		for(int a= e;a<=s;a++){
			total += a;
	
	if (s==e){
		total-=s;
	}
	cout<<total<<endl;
			
		
	}
	
	}*/
	
/*int main(){
	cout<<"begin = ";
	int s ;
	cin>>s;
	cout<<"ending = ";
	int e ;
	cin>>e;
	
	int total = 0;
	if(s>=e){
		int temp = s;
		s = e ;
		e = temp;
				
	}
	
	
	
		
	for(int a = s;a <= e;a++){
			total += a;
			
		}
	cout << "total" << total<<endl;	
	}
	*/

int main(){
	cout<<"begin = ";
	int s ;
	cin>>s;
	cout<<"ending = ";
	int e ;
	cin>>e;
	
	int total = 0;
		
/*	for(int a = (s<e?s:e);a <= (s>e?s:e);a++){
			total += a;
			
		}
	cout << "total" << total<<endl;	
	}           */                
	
	for(int a = (s<e?s:e);a <= (s>e?s:e);total += a++);
			
		
	cout << "total" << total<<endl;	  
}
	

		

