#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> num;
num.push_back(10);
num.push_back(20);
num.push_back(30);
num.push_back(40);
num.push_back(50);
for(int i=0;i<num.size();i++)
{
    cout<<num[i]<<" ";
}

    return 0;
}