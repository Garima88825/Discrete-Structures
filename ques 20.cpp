/*
	Name: question 20
	Author: Frhan Akhtar and Garima Pandey
	Description: finding number of leaf nodes in a full m-ary tree.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Tree
{
	private:
	int m,i;
	public:
	Tree()
	{
		m=0;
		i=0;
	}
    Tree(int M,int I)
    {
    	m=M;
    	i=I;
	}
	int cal_leaves();
};
//Function to evalute the number of leaves
int Tree::cal_leaves()
{
	return((m-1)*i)+1;
}
int  main()
{
      	int m,i;
    	//Input of m for m-ary Tree
		cout<<"\n\nEnter the m :: ";
		cin>>m;
		cout<<"\n\nEnter the number of internal vertices(i) :: ";
		cin>>i;
		Tree obj(m,i);
		int result=obj.cal_leaves();
		cout<<"\n\nThe number of leaves are :: "<<result;
		getch();
		return 0;
}

