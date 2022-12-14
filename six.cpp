#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>var;
var.push_back(10);
var.push_back(2);
var.push_back(300);
var.push_back(200);
var.push_back(100);
cout<<"Befor reverse "<<endl;
for(auto i:var)
{
    cout<<i<<" ";
} 
cout<<"\nAfter reverse "<<endl;
reverse(var.begin(),var.end());
for(auto i:var)
{
    cout<<i<<" ";
}   
 return 0;
}