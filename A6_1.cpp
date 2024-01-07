#include<iostream>
using namespace std;
int sqr(int a){
    int square=a*a;
    return square;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<sqr(i)<<endl;
    }
}