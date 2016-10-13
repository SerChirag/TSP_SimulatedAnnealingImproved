#include "TSP_SA.h"
int main()
{
	
	int n, dist_type;
	string s;
	cin>>s;
	if(s=="euclidean")
		dist_type = 0;
	else
		dist_type = 1;
	cin>>n;
	double *x_coordinates, *y_coordinates, **edge;
	x_coordinates = new double[n];	
	y_coordinates = new double[n];

	edge = new double*[n];
	for(int i=0;i<n;i++)
	{
		edge[i]	= new double[n];
	}

	for(int i=0;i<n;i++)
	{
		cin>>x_coordinates[i]>>y_coordinates[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>edge[i][j];
		}
	}
	TSP_SA tsp(edge,n);
	tsp.begin();
	return 0;
}

