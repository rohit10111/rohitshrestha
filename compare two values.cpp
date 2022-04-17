#include<iostream>
#include<conio.h>
using namespace std;
class compare{
	int a,b;
	public:
		void getInfo(){
			cout<<"enter two number:"<<endl;
			cin>>a>>b;
		
	}
	void friend access(compare);
}; 
void access(compare C1){
	if(C1.a>C1.b){
		cout<<"maximum is :"<<C1.a<<endl;
	}else{
		cout<<"maximu is :"<<C1.b<<endl;
	}
}
int main(){
	compare C1;
	C1.getInfo();
	access(C1);
	getch();
	
}
