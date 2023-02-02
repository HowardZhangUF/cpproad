#include<iostream>
#include<string>
using namespace std;

int main(){
	/*string s1 = "hellow world";
	string *ps1 = new string("obstensible world");
	
	char c1 = s1.at(0);
	char pc1 = ps1->at(0);
	
	cout<<c1<<endl;
	cout<<pc1<<endl;
	
	cout<<s1[0]<<endl;
	cout<<(*ps1)[0]<<endl;
	 
	for(int i;i<s1.size();i++){
		cout<<s1[i];
	}
	cout<<endl;
	s1.assign("new assign content");
	ps1->assign("new assign content");
	
	cout<<s1<<endl;
	cout<<*ps1<<endl;
	
	s1.append("c++");
	*ps1 += "jave";
	cout<<s1<<endl;
	cout<<*ps1<<endl;*/
	
	string s1 = "1234";
	s1.append(s1.insert(2,"3"));
	
	cout<<s1<<endl;
	
	//s1.erase();
	//cout<<s1<<endl;
	
	size_t st = s1.find("88");
	cout<<st<<endl;
	if(st == string::npos){
		cout<<"not found"<<endl;
	}
	
	
	
	
}

