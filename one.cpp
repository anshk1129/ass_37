#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v={10,20,30,40,5};
vector<int>::iterator i;
for(i=v.begin();i!=v.end();i++){
    cout<<*i<<" ";
}
return 0;
}