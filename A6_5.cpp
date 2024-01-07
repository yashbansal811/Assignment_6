#include<iostream>
using namespace std;
int prime(int a,int b){
    for(int i=a;i<=b;i++){
        if(i==2){
            cout<<2<<endl;
        }
        else{
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    break;
                }
                else if(j==i-1){
                    cout<<i<<endl;
                }
            }
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    prime(a,b);
}