#include<iostream>
using namespace std;
int main()
{
    int num_1;
    cout << "Enter your marks: ";
    cin >> num_1;

    if (num_1 >= 90) {
        cout << "Grade: A+"<<endl;
    } 
	else if(num_1>=80){
		cout<<"Grade: A"<<endl;
	}
	else if (num_1 >= 70) {
        cout << "Grade: B"<<endl;
    } 
	else if (num_1 >= 60) {
        cout << "Grade: C"<<endl;
    } 
	else {
        cout << "Grade: F"<<endl;
	}
}
