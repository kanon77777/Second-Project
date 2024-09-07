#include<iostream>
#include<set>
using namespace std;
int main()
{
    int x,y;
    cout<<"size A"<<endl;
    cin>>x;
    cout<<"size B"<<endl;
    cin>>y;
    cout<<"element A:"<<endl;
    set <int>A,B;
    for(int i=0;i<x;i++)

    {
        int ele1;
        cin>>ele1;
        A.insert(ele1);
    }
    cout<<"element B"<<endl;
    for(int i=0; i<y;i++)
    {
        int ele2;
        cin>>ele2;
        B.insert(ele2);
    }
    cout<<"relation"<<endl;
    for(int a:A)
    {
        for(int b:B)
        {
            if(a>b)
            {
                cout<<"("<<a<<","<<b<<")";
            }
        }
    }
    cout<<endl;
    cout<<endl<<"matrix"<<endl;
    for(int a:A)
    {
        for(int b:B)
        {
            cout<<(a<b?1:0)<<" ";
        }
        cout<<endl;
   }

}
