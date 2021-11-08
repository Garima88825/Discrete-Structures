/*
	Name: question 3
	Author: Frhan Akhtar and Garima Pandey
	Description: checking for reflexive,symmetric,antisymmetric and transitive conditions of relations.
*/
#include<iostream>
using namespace std;

class relation
{
	int** ar;
	int n;
	
	public:
		void input();	
		bool reflexive();
		bool symmetric();
		bool antisymmetric();
		bool transitive();
		void display();
};

void relation::input()
{
	cout<<"enter the size of set as an array : ";
	cin>>n;
	ar=new int*[n];
	for(int i=0;i<n;i++)
		ar[i]=new int[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ar[i][j]=0;
		}
	}
	int m;
	cout<<"Enter the no of relations you want:";
	cin>>m;
	int a[m],b[m];
	cout<<"Enter the relation:";
	for(int i=0;i<m;i++)
		cin>>a[i]>>b[i];
	for(int i=0;i<m;i++)
		ar[(a[i]-1)][(b[i]-1)]=1;		
}

void relation::display()
{
	cout<<"\nThe Relation Matrix is:\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool relation::reflexive()
{
	int f=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j && ar[i][j]!=1)
			{
				f=0;
				break;
			}
		}
		if(f==0)
			break;
	}
	if(f==1)
		return true;
	else
		return false;
}

bool relation::symmetric()
{
	int f=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ar[i][j]!=ar[j][i])
			{
				f=0;
				break;
			}
		}
		if(f==0)
			break;
	}
	if(f==1)
		return true;
	else
		return false;
}

bool relation::transitive()
{
	int f=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ar[i][j]==1)
			{
				for(int x=0;x<n;x++)
				{
					if(ar[j][x]==1 && ar[i][x]!=1)
					{
						f=0;
						break;
					}
				}
			}
			if(f==0)
				break;
		}
		if(f==0)
			break;
	}
	if(f==1)
		return true;
	else
		return false;
}

bool relation::antisymmetric()
{
	int f=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ar[i][j]==1 && ar[j][i]==1 && i!=j)
			{
				f=0;
				break;
			}
		}
		if(f==0)
			break;
	}
	if(f==1)
		return true;
	else
		return false;
}

int main()
{
	relation r1;
	r1.input();
	r1.display();
	char x='y';
	int ch;
	do{
		cout<<"1:check for reflexive";
		cout<<"\n2:check for symmetric";
		cout<<"\n3:check for transitive";
		cout<<"\n4:check for antisymmetric";
		cout<<"\nenter your choice : ";
		cin>>ch;
	switch(ch)
	{
		case 1:
			if(r1.reflexive())
			cout<<"\nRelation is Reflexive"<<endl;
			else
			cout<<"\nRelation is NOT Reflexive"<<endl;
			break;
		case 2:
			if(r1.symmetric())
			cout<<"\nRelation is Symmetric"<<endl;
			else
			cout<<"\nRelation is NOT Symmetric"<<endl;break;
		case 3:
			if(r1.transitive())
			cout<<"\nRelation is Transitive"<<endl;
			else
			cout<<"\nRelation is NOT Transitive"<<endl;break;
		case 4:
			if(r1.antisymmetric())
			cout<<"\nRelation is Antisymmetric"<<endl;
			else
			cout<<"\nRelation is NOT Antisymmetric"<<endl;break;
		case 5: 
			exit(1);break;
		default:cout<<"wrong choice";
	}
	cout<<"\nDo you wish to continue(y/n):";
		cin>>x;	
}
while(x=='y');
return 0;
}
