#include<iostream>
#include<conio.h>
#include<math.h>
#define PIE 3.14
using namespace std;
void computesphere(float &s,float &v,float &r)
{
	s=4*3.14*pow(r,2);
	v=(4.0/3)*PIE*pow(r,3);
	
}
int main(){
	float s,v,r;
	cout<<"enter the radius of sphere:"<<endl;
	cin>>r;
	computesphere(s,v,r);
	cout<<"surface area is:"<<s<<endl<<"volume is:"<<v<<endl;
	getch();
}

