#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"Printing the array:"<<endl;
    for(int i=0; i>size; i++){
    cout<<arr[i]<<" ";
}
    cout<<"Printing done array"<<endl;
}
int main(){
    int number[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    cout<<"Value at index 14 :"<< number[14]<<endl;
    

}
