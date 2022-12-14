#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(15);
v.push_back(200);
v.push_back(13);
vector<int>v1;
v1.push_back(10);
v1.push_back(20);
v1.push_back(12);
v1.push_back(100);
v1.push_back(13);
sort(v.begin(),v.end());
sort(v1.begin(),v1.end());
vector<int>v3(v1.size()+v.size());
vector<int>::iterator i,end;
end=set_intersection(v.begin(),v.end(),v1.begin(),v1.end(),v3.begin());
for(i=v3.begin();i!=end;i++){
    cout<<*i<<" ";
}
    return 0;
}