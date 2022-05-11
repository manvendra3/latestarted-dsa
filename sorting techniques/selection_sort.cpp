#include<iostream>
using namespace std;



int main(){

    int arr[4] = {3,4,6,8};

    for(int i = 0;i<4;i++){
        int minindex = i;
        for(int j = i+1;j<4;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }

    for(int i = 0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    



    return 0;
}