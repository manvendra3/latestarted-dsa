#include<iostream>
using namespace std;



int main(){

    int arr[5] = {-2,45,0,11,-9};

    for(int i = 0;i<4;i++){
        for(int j = 0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }

    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    



    return 0;
}