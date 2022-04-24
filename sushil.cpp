#include<iostream>
#include<conio.h>
using namespace std;
class area{
	int l;
	int b;
	void get(){
		cout<<"enter length"<<endl;
		cin>>l;
		cout<<"enter breadth"<<endl;
		cin>>b;

	}
	void display(){
		cout<<"area ="<<(l*b)<<endl;
	}	
};
int main(){
	area a;
	a.getarea();
	a.displayarea();
	getch();
}
