#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v={10,20,3,4,5,22,100};
vector<int>::iterator i,end;
end=find(v.begin(),v.end(),4);
if(end!=v.end()){
    cout<<"Element found at "<<end-v.begin()<<endl;

}
else{
    cout<<"\nNot found";
}
    return 0;

}