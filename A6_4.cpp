#include<iostream>
using namespace std;
int odd(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    odd(a,b);
}