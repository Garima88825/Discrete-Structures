/*
	Name: question 14
	Author: Frhan Akhtar and Garima Pandey
	Description: graphically representing the values of recurrence relations.
*/
#include <iostream>
using namespace std;

int function1(int n){
	if(n == 0)
        return 1;
	else
        return function1(n - 1) + n;
}

int function2(int n){
	if(n == 0)
        return 1;
	else
        return function2(n - 1) + n * n;
}

int function3(int n){
	if(n == 1)
        return 1;
	else
        return 2 * function3(n / 2) + n;
}

int main(){
	int n;
	char option;
	char choice;
	cout << "Enter value of n : ";
	cin >> n;
	cout << "\nChoose on of the given options : ";
	cout << "\n1. First relation";
	cout << "\n2. Second relation";
	cout << "\n3. Third relation\n";
	cout<<"\n4. E to exit.";
	do
	{
		cout<<"\n Please provide your choice . ";
		cin >> option;
		switch(option)
		{
			case '1':
                cout << "\nValue of function1(" << n << ") is : ";
		        cout <<function1(n);
                break;
			case '2':
                cout << "\nValue of function2(" << n << ") is : ";
		        cout << function2(n);
				break;
			case '3':
                cout << "\nValue of function3(" << n << ") is : ";
		        cout << function3(n);
				break;
			case 'E':
			case 'e':
				exit(6342);
			default:
		    	cout << "\nPlease enter valid option.";
		}
    }
    while(option !='E'||option!='e');
        return 0;
}
