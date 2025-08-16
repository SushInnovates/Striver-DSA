#include<iostream>
using namespace std;
int main(){

    /*
        pattern 1 -
        *****
        *****
        *****
     */
    int i,j,row,column;
    cout<<"Enter Rows :";
    cin>>row;
    cout<<"Enter Columns :";
    cin>>column;

    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;

}
