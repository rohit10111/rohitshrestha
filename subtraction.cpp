#include<iostream.>
#include<conio.h>
using namespace std;
class Bcomplex;
class Acomplex{
	int a,b;
	public: 
       	void getInfo(){
		   	cout<<"enter complex number:"<<endl;
	    	cin>>a>>b;
	}  
	void displayInfo(){
		cout<<"The number is :"<<a<<"-i"<<endl;
	}
		friend Acomplex sub(Bcomplex B,Acomplex A);
};
class Bcomplex{
	int a,b;
	public:
		void getInfo(){
			cout<<"enter complex number:"<<endl;
			cin>>a>>b;
		}
		void displayInfo(){
			cout<<"the number is:"<<a<<"-i"<<b<<endl;
			 
		}
			friend Acomplex sub(Bcomplex B,Acomplex A);
		
};
Acomplex Acomplex ::sub(Bcomplex B,Acomplex A){
	Acomplex A1;
	A1.a=A.a-B.a;
	A1.b=A.b-B.b;
	A.displayInfo();
	return A1;
}
int main(){
	Acomplex A,A1;
	Bcomplex B;
	A1.getInfo();
	B.getInfo();
	A1.displayInfo();
    B.displayInfo();
    cout<<"after subtraction"<<endl;
    A=A1.sub(B,A);
    getch();
	
	
}
