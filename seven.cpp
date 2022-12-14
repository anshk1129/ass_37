#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> var={10,20,1,2,3,4};
    int sum=accumulate(var.begin(),var.end(),0);
    cout<<"Sum is "<<sum;
    return 0;
}