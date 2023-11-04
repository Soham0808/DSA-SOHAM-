#include<bits/stdc++.h>
using namespace std;
int SecondLargest(int arr[], int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i] >largest){
            slargest=largest;
            largest=arr[i];
        }
    
        else if(arr[i]< largest && arr[i]>slargest)
        slargest=arr[i];
    
    }
    return slargest;
}

int main (){
    int n=5;
    int arr[5]={1,5,4,9,8};
    cout<<"The second largest is:"<<SecondLargest(arr,n);

}
