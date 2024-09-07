#include<iostream>
#include<set>
using namespace std;
int main()
{
int n;
cout<<"number 1:"<<endl;
cin>>n;
set<int>A;
cout<<"element:"<<endl;
for(int i=0;i<n;i++)
{
int ele;
cin>>ele;
A.insert(ele);
}
cout<<"pair element 1:"<<endl;
for (int a:A){
  for(int b:A)
  if(b%a==0){
  {
    cout<<"("<<a<<","<<b<<")"<<endl;
    }
  }
}
cout<<"pair element 2:"<<endl;
for (int a:A){
  for(int b:A)
  if(a<=b){
  {
    cout<<"("<<a<<","<<b<<")"<<endl;
    }
  }
}

}
