
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,up,lp,epsilon;
    cout<<"coficient "<<endl;
    cin>>a>>b>>c;
    cout<<"upper and lower bound:"<<endl;
    cin>>up>>lp;
    cout<<"epsilon"<<endl;
    cin>>epsilon;
    double fa=a*lp*lp+b*lp+c;
    double fb=a*up*up+b*up+c;
    if(fa*fb>=0)
    {
        cout<<"root is not found in the interval"<<endl;
    }
    double root;
    while(up-lp>=epsilon)
    {
        double root=(up+lp)/2;
        double fc=a*root*root+b*root+c;
        if(fc==0)
        {
            cout<<"root is approximately"<<endl;
        }
        else if(fa*fc<0.00)
        {
            up=root;
        }
        else
        {
            lp=root;
        }
    }
    cout<<"the root is approximately:"<<root<<endl;
}
