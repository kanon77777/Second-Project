#include<iostream>
#include<algorithm>
using namespace std;
#define INF 999
int main()
{
    int nv;
    cout<<"number"<<endl;
    cin>>nv;
    int grap[nv][nv];
    cout<<"enter the graph"<<endl;
    for(int i=0;i<nv;i++)
        {
            for(int j=0;j<nv;j++)
            {
                cin>>grap[i][j];
            }
        }
        cout<<"print the graph"<<endl;
    for(int i=0;i<nv;i++)
        {
            for(int j=0;j<nv;j++)
            {
                cout<<grap[i][j]<<" ";
            }
            cout<<endl;
        }


cout<<"enter the graph"<<endl;
    for(int k=0;k<nv;k++)
        {
            for(int i=0;i<nv;i++)
            {
               for(int j=0;j<nv;j++)
               {
                   if(grap[i][k]+grap[k][j]<grap[i][j])
                   {
                       grap[i][j]=grap[i][k]+grap[k][j];
                   }
               }
            }
        }
        cout<<"distance pair of the vartics"<<endl;
    for(int i=0;i<nv;i++)
        {
            for(int j=0;j<nv;j++)
            {
                if (grap[i][j]==INF)
                {
                    cout<<"INT\t"<<endl;
                }
                else
                {
                    cout<<grap[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
}
