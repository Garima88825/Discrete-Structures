/*
	Name: question 6
	Author: Frhan Akhtar and Garima Pandey
	Description: implementation of tower of hanoi using recursion.
*/
#include<iostream>
using namespace std;

int tower(int x)
{ 
	if(x==1)
	{
		return 1;
	}
	else
	return 2*tower(x-1)+1; 
	
}

int main()
{ 
	int n;
	char ch;
	do
	{
		cout<<"Enter no. of disks : ";	
		cin>>n;
		cout<<"\n";
	    cout <<"the no of steps are : "<<tower(n);
	    cout<<"\ndo you wish to continue(y/n) : ";
	    cin>>ch;
	}
	while(ch=='y' || ch=='Y');
	
	return 0;
}
