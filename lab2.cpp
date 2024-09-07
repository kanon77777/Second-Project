#include<iostream>
#include<set>
using namespace std;
int main(){
int sA,sB;
cout << " enter the elements in A: ";
cin >> sA;

cout << " enter the elements in B: ";
cin >> sB;
set<int>A,B;
cout << " enter the elements of A :";

for(int i=0;i<sA;i++){

int eleA;
cin >> eleA;
A.insert(eleA);


}
cout << " enter the elements of B :";

for(int i=0;i<sB;i++){

int eleB;
cin >> eleB;
A.insert(eleB);


}
cout << endl << " Relation : " << endl;
for(int a:A){
for(int b:B){
if(a>b)
cout<<" ( "<< a << " , " << b << " ) " << endl;
}

}

}








