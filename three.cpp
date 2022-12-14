#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr={};
int a;
while(a){
cout<<"Press 0 for stop entering the element "<<endl;
cout<<"Otherwise enter the elements "<<endl;
cin>>a;
if(a)
arr.insert(arr.end(),a);
}
vector<int>::iterator i;
for(i=arr.begin();i!=arr.end();i++){
    cout<<*i<<" ";
}
return 0;
}