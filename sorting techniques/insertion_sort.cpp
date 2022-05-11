 #include<iostream>
using namespace std;



int main(){

    int arr[6] = {10,1,7,4,8,-2};

    for(int i = 1;i<6;i++){
        int j;
        int temp = arr[i];
        for(j = i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j]; 
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    



    return 0;
}