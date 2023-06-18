#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    int small=fact(n-1);
    int big= n* small;
    return big;

}
int main(){
    int n ;
    cout<<"Enter the value of n :" << endl;
    cin >> n;
    int ans= fact(n);
    cout<<"Ans is:"<< ans <<endl;
    return 0;

}