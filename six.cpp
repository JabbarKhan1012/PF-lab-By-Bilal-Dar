#include<iostream>
using namespace std;
int main()
{
	cout<<"1.Red"<<endl;
	cout<<"2.yellow"<<endl;
	cout<<"3.green"<<endl;
	int color;
	cout<<"Enter the color::";
	cin>>color;
	if(color == 1){
		cout<<"Stop your vehicle.";
	}
	else if(color==2){
		cout<<"Get ready to move.";
	}
	else if(color==3){
		cout<<"you can go";
	}
	return 0;
}
