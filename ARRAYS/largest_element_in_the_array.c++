#include<iostream>
#include<vector>
using namespace std;
int largestElement(int arr[], int n) {
  int largest = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  return largest;
}

int main(){
    int n=5;
    int arr[5]={3,2,5,7,2};
    cout<<"The largest element in the array is:"<<largestElement(arr,5)<<endl;
    return 0;
}