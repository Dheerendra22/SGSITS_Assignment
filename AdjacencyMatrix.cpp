#include<iostream>
using namespace std;

int main()
{
    int mat[20][20] = {0};
    int x,y,V,E,directed = 1;

    cout<<"Enter number of vertex and Edges in the graph"<<endl;
    cin>>V>>E;
    cout<<"Press 1 for Directed Graph and Press 0 for Undirected Graph"<<endl;
    cin>>directed;
    for(int i = 1 ; i <= E; i++)
    {
        cout<<"Enter Source and Destination for "<<i<<" Edge"<<endl;
        cin>>x>>y;

        if( x <= V && y <= V)
        {
            mat[x][y] = 1;
            if(directed == 0)
                mat[y][x] = 1;
        }
        else
            cout<<"Invalid Edge"<<endl;
    }
// display

    for(int i = 1 ; i<= V ; i++)
    {
      for(int j = 1 ; j<= V ; j++)
      {
         cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }

    return 0;

}
