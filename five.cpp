#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>var;
var.push_back(10);
var.push_back(2);
var.push_back(300);
var.push_back(200);
var.push_back(100);
cout<<"Largest element is "<<*max_element(var.begin(),var.end());
cout<<"\nSmallest element is "<<*min_element(var.begin(),var.end());
    return 0;
}