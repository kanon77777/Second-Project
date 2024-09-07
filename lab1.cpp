#include<iostream>
#include<set>
using namespace std;


int main(){
cout << " enter the elements in A: ";
int n;
cin >> n;
set<int>A;
int a,b;
for(int i=0;i<n;i++){

int ele;
cin >> ele;

A.insert(ele);

}
for(int a:A){

for(int b:A){
cout << "  ( " << a << " ," << b << " )" << endl;


}



}
cout << endl << " ordered pair in R1 :" << endl;

for(int a:A){

for(int b:A){
        if(b%a == 0)
cout << "  ( " << a << " ," << b << " )" << endl;


}


}

cout << endl << " ordered pair in R2 :" << endl;
for(int a:A){

for(int b:A){
        if(a < b)
cout << "  ( " << a << " ," << b << " )" << endl;


}



}


}
