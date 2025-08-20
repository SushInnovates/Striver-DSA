#include<iostream>
using namespace std;
int main(){

    /*
        Pattern 13 -
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
    int i,j,n;
    cout<<"Enter N : ";
    cin>>n;
int num=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            num = num +1;
        }
        cout<<endl;
    }
    return 0;
}