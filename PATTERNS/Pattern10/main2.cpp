#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter N :";
    cin>>n;

    for(i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}