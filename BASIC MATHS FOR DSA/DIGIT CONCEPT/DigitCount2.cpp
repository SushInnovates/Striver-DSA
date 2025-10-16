#include <iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int Count(int n){
    int cnt = (int)(log10(n) +1);
    return cnt;
}
//Other Way to count Digits
int main(){
    int n;
    cout<<"enter Number : ";
    cin>>n;
    
    int digit = Count(n);
    cout<<"Number of digits : "<<digit<<endl;
    return 0;
}
