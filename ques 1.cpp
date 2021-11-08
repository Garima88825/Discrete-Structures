/*
	Name: question 1
	Author: Frhan Akhtar and Garima Pandey
	Description: cheching whether an element belongs to a set or not and printing the power set of the set.
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class set
{
	int *ar;
	int n;
	
	public:
		
		void input();
		void unique();
		void display();
		int cardinality();
		bool ismember();
		void powerset();
		
		
};
void set::input()
{
	cout<<"enter size of array : ";
	cin>>n;
	ar=new int[n];
	cout<<"enter the elements : ";
	for(int i=0;i<n;i++)
	cin>>ar[i];
}

void set::display()
{
	for(int i=0;i<n;i++)
		cout<<ar[i]<<" ";
	cout<<endl;
}

void set::unique()
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

int set::cardinality()
{
	return n; 
}
bool set::ismember()
{
	int x;
	bool b=false;
	cout<<"enter the number : ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(ar[i]==x)
		{
			b=true;
			break;
		}
	}
	return b;
}
void set::powerset()
{
	int count=pow(2,n);
	int temp;
	int c=0;
	//char ch=237;
	//cout<<"{ {"<<ch<<"},";
	cout<<"{ {},";
	for(int i=1;i<count;i++)
	{
		temp=i;
		cout<<"{";
		c=0;
		for(int j=0;j<n;j++)
		{
			if(temp&1)
			{
				cout<<ar[j];
				c++;
			}
			temp=temp>>1;
			if(temp&1 && c>0)
				cout<<",";
		}
		if(i<count-1)
			cout<<"},";
		else
			cout<<"}";
	}
	cout<<" }";
	
}

int main()
{
	set s1;
	s1.input();
	int x,z;
	bool t;
	char ch='y';
	do
	{
		cout<<"1: unique elements";
		cout<<"\n2: cardinality";
		cout<<"\n3: ismember";
		cout<<"\n4: powerset";
		cout<<"\n5: Exit";
		cout<<"\nEnter your choice : ";
		cin>>x;
		switch(x)
		{
			case 1:	cout<<"array after removing duplicates :";
					s1.unique();
					s1.display();
					break;	
			case 2:	s1.unique();
					z=s1.cardinality();
					cout<<"cardinality : "<<z<<endl;
					break;
		 	case 3:	t=s1.ismember();
					if(t)
						cout<<"found"<<endl;
					else
						cout<<"not found "<<endl;
					break;
			case 4:	cout<<"powerset : ";
					s1.unique();
					s1.powerset();	
					break;
			case 5: exit(1);
			default:cout<<"wrong choice";
		}
		cout<<"\nDo you wish to continue(y/n):";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 1;
}
