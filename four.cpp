#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num={1,2,3,4,5,6,7,8,9,10};
      vector<int>num1=num;//first way is using constructor vector<int>num1(num)ornum1=num;
      vector<int>num2;
      num2.assign(num1.begin(),num1.end());
      num1[0]=100;
      num1[3]=300;
      for(int i=0;i<num.size();i++){
        cout<<num[i]<<"                ";
        cout<<num1[i]<<"               ";
        cout<<num2[i];
        cout<<endl;
      }

    return 0;
}