#include<iostream>
using namespace std;
int main(){
int arr[5] = {4,2,8,33,4};
int n;
cin>>n;

for(int i= 0 ;i<5;i++){
    if(arr[i]==n){
        cout<<"present";
        return 0;
    }
}
cout<<"not present";
return 0;
}