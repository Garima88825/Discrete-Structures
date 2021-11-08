/*
	Name: question 6
	Author: Frhan Akhtar and Garima Pandey
	Description: implementation of tower of hanoi using recursion.
*/
#include<iostream>
using namespace std;

void tower(int n,char Sour, char Aux,char Des)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
		return;
	}
	
	tower(n-1,Sour,Des,Aux);
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
	tower(n-1,Aux,Sour,Des);
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
	    tower(n,'A','B','C');
	    cout<<"\ndo you wish to continue(y/n) : ";
	    cin>>ch;
	}
	while(ch=='y' || ch=='Y');
	
	return 0;
}
