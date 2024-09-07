#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"element"<<endl;
    cin>>n;
    int x[n],y[n];
    cout<<"element of x:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"element of y"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    double e;
    cout<<"interpolation"<<endl;
    cin>>e;
    double result =0;
    for(int i=0;i<n;++i)
    {
        double term=y[i];
        for(int j=0;j<n;++j)
        {
            if(j!=i)
            {
                term= term*(e-x[j])-(x[i]-x[j]);
            }
        }
        result =result +term;
    }
    cout<<"result:"<<result<<endl;
}
