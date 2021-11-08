/*
	Name: question 2
	Author: Frhan Akhtar and Garima Pandey
	Description: checking for the subset , finding union and intersection , 
	             complement , set difference ,  symmetric difference and cartesian product of sets.
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class sett
{
	int *a;
	int *b;
	int n1;
	int n2;
	
	public:
		
		void input();
		void unique();
		void display();
		int cardinality();
		bool ismember();
		void powerset();
		
		
};
void sett::input()
{
	cout<<"enter size of first array : ";
	cin>>n1;
	a=new int[n1];
	cout<<"enter the elements : ";
	for(int i=0;i<n1;i++)
	cin>>a[i];
	cout<<"enter size of second array : ";
	cin>>n2;
	b=new int[n2];
	cout<<"enter the elements : ";
	for(int i=0;i<n2;i++)
	cin>>a[i];
}
void sett::unique()
{
	int j;
	for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				for(int k=j;k<n;k++)
					ar[k]=ar[k+1];
				n--;j--;
			}
		}
		
	}
}












