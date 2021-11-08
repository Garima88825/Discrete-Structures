/*
	Name: question 17
	Author: Frhan Akhtar and Garima Pandey
	Description: accepting a direct graph G and computing in-degree and out-degree of each vertices.
*/
#include<iostream>

using namespace std;
class Graph
{
	private:
	int vertex;
	int **M;	
	public:
		Graph()
		{
			vertex=0;
			M=NULL;
		}
		void enter_vertex();
		void show_matrix();
		void indegree();
		void outdegree();
		void input();
};
//Function to print indegree all vertices
void Graph::indegree()
{
	int sum=0;
	char c;
	for(int i=0;i<vertex;i++)
	{
		sum=0;
		c=(char)97+i;
		for(int j=0;j<vertex;j++)
		{
			sum+=M[j][i];
		}
		cout<<"\nThe indegree of vertex "<<c<<" is "<<sum;
	}
}
//Function to print outdegree of all vertices
void Graph::outdegree()
{
	int sum=0;
	char c;
	for(int i=0;i<vertex;i++)
	{
		sum=0;
		c=(char)97+i;
		for(int j=0;j<vertex;j++)
		{
			sum+=M[i][j];
		}
		cout<<"\nThe outdegree of vertex "<<c<<" is "<<sum;
	}
}
//Function to enter the number of vertices of a graph
void Graph::enter_vertex()
{
	cin>>vertex;
	M=new int*[vertex];
	for(int i=0;i<vertex;i++)
	M[i]=new int [vertex];
	
	for(int i=0;i<vertex;i++)
       for(int j=0;j<vertex;j++)   //To set all elements of relation_matrix to zero.
          M[i][j]=0;
}

void Graph::input()
{
	cout<<"Enter the elements of matrix (1/0) : ";
	for(int i=0;i<vertex;i++)
       for(int j=0;j<vertex;j++)   //To set all elements of relation_matrix to zero.
          cin>>M[i][j];
	
}
//Function to display adjacency matrix
void Graph::show_matrix()
{
	cout<<endl;
     for(int i=0;i<vertex;i++)
     {
    
             for(int j=0;j<vertex;j++)
             {
                     cout<<M[i][j]<<" ";
             }
        cout<<endl;
     }
}
int main()
{
	char ch;
	Graph obj;
	do{
	cout<<"\nEnter the number of vertices :: ";
	obj.enter_vertex();
	obj.input();
    cout<<"\nThe adjacency matrix is :: \n";
    obj.show_matrix();
    cout<<"\n\nThe outdegree of vertices are :: \n";
    obj.outdegree();
    cout<<"\n\nThe indegree of vertices are  :: \n";
    obj.indegree();
    cout<<"\ndo you wish to continue (y/n) : ";
    cin>>ch;
}while(ch=='y' || ch=='Y');
	return 0;
}

