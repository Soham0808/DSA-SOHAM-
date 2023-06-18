#include<iostream>
using namespace std;
int firstOccurance(int arr[] , int size, int key){
    int start =0;
    int end = size-1;
    int ans =-1;

    int mid = start +(end -start)/2;
    while (start <=end){
        if (arr[mid]==key){
        ans = mid;
       end = mid -1;
    }
    else if (key>arr[mid]){
        start = mid +1;
    }
    else if (key < arr[mid]) {
        end = mid -1;
    }
    mid = start +(end -start)/2;
}
return ans;
}
int lastOccurance(int arr[] , int size, int key){
    int start =0;
    int end = size-1;
    int ans =-1;

    int mid = start +(end -start)/2;
    while (start <=end){
        if (arr[mid]==key){
        ans = mid;
        start = mid +1;
    }
    else if (key>arr[mid]){
        start = mid +1;
    }
    else if (key< arr[mid]){
        end = mid -1;
    }
    mid = start +(end -start)/2;
}
return ans;
}
int main (){
    int even[7]={1,2,3,3,3,3,5};
    cout<<"First occurance of 3 is at index "<< firstOccurance(even,7,3)<<endl;
    cout<<"Last occurance of 3 is at index "<< lastOccurance(even , 7,3)<<endl;
    return 0;
}