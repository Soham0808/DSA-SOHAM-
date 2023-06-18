#include<iostream>
using namespace std ;
void occurace(int n ){
if(n==0)
return;
cout<< n << endl;
occurace(n-1);

}

int main (){
    int  n ;
     cout<< "Enter the value of n :"<< endl;
     cin>> n ;
      cout<< endl;
     occurace(n);
    
     return 0;
}
