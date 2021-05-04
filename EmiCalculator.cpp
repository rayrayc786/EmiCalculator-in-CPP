#include<iostream>
#include<math.h>
using namespace std;
float emi_calculate(float p,float r,float t){
	float emi;
	float mr=r/(12*100);
	float mt=t*12;
	emi=(p * mr * pow(1 + mr, mt)) / (pow(1 + mr, mt) - 1);
	return emi;
}
int main(){
	bool flag=true;
	cout<<"\n\n\n\t\t\t\tWelcome To Emi Calculator"<<endl;
	while(flag){
		cout<<"\n\nEnter Your Choice"<<endl;
		cout<<"1. Emi Calculator"<<endl;
		cout<<"2. Exit"<<endl;
		int n;
		cin>>n;
		switch(n){
			case 1: 
					float p,r,t;
					cout<<"Enter Principal Amount"<<endl;
					cin>>p;
					cout<<"Enter Rate Of Interest"<<endl;
					cin>>r;
					cout<<"Enter Time in Years"<<endl;
					cin>>t;
					cout<<"Emi : "<<emi_calculate(p,r,t);
					break;
			case 2: flag=false;
					break;
		}
	}
	
	
	
	
}
