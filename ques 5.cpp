/*
	Name: question 5
	Author: Frhan Akhtar and Garima Pandey
	Description: generating fibonacci series using recursion.
*/
#include<iostream>
using namespace std; 
int fibonacci(int n) 
{ 
    if (n<=1) 
        return n; 
    return fibonacci(n-1) + fibonacci(n-2); 
} 
int main() 
{ 
	int x;
	cout<<"\nenter the number of terms of the series : ";
	cin>>x;
	cout<<"\nthe series is : ";
    for(int i=0;i<x;i++)
	{			
		cout<<fibonacci(i)<<" ";
	}
    return 0; 
} 
