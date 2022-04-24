#include<iostream>
// changed

#include<conio.h>
using namespace std;
float SimpleIntrest(float principal,float rate,float time=10)
{
	return((principal*rate*time)/100);
	
}
int main(){
	float SI;
	SI=SimpleIntrest(5000,1.5);
	SI=SimpleIntrest(100,4,5);
	cout<<"simple intrest is :"<<SI<<endl;
	getch();
	}
