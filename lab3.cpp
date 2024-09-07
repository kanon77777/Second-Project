#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n][n],y[n][n];
    cout<<"first matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>x[i][j];
        }
    }
    cout<<"secound matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>y[i][j];
        }
    }
    cout<<"first matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"secound matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"x & y union:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int  j=0;j<n;j++)
        {
            cout<<(x[i][j]||y[i][j]?1:0)<<" ";
        }
        cout<<endl;
    }

cout<<"x & y intersection"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<(x[i][j]&&y[i][j])<<" ";
        }
        cout<<endl;
    }
    }
