#include<iostream>
using namespace std;
int main()
{
    int num_1, num_2;
    cout<<"enter two integers:";
    cin>>num_1>>num_2;
    cout << "num_1 == num_2: " << (num_1 == num_2) << endl;
    cout << "num_1 != num_2: " << (num_1 != num_2) << endl;
    cout << "num_1 > num_2: " << (num_1 > num_2) << endl;
    cout << "num_1 < num_2: " << (num_1 < num_2) << endl;
    cout << "num_1 >= num_2: " << (num_1 >= num_2) << endl;
    cout << "num_1 <= num_2: " << (num_1 <= num_2) << endl;
    return 0;
}