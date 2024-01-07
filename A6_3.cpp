#include<iostream>
using namespace std;
    int vote(int age){
        if(age>=18){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    int main(){
        int age;
        cin>>age;
        vote(age);
    }
