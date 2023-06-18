#include<iostream>
using namespace std;
int power(int n){
if(n==0)
return 1 ;
int small= power(n-1);
int big= 2* small;
return big;
}
int main(){
    int n ;
    cout<< "Enter the value of n "<< endl;
    cin>> n; 
    int ans ;
    ans =power(n);
    cout <<"Ans is :"<<ans<< endl;
    return 0;

    }