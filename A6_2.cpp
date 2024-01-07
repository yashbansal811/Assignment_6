#include<iostream>
using namespace std;
float area(float r){
    float a=3.14*r*r;
    return a;
}
float cfr(float r){
    float c=2*3.14*r;
    return c;
}
int main()
{
    float r;
    cin>>r;
    cout<<"Area="<<area(r)<<endl;
    cout<<"Circumference="<<cfr(r);
    return 0;
}