#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter N :";
    cin>>n;

    int start = 1;
    for(i=0;i<n;i++){
        if(i%2==0){
            start = 1;
        }
        else{
            start = 0;
        }

        for(j=0;j<=i;j++)
        {
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
    }
    return 0;
}