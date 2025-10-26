//bubble sort
#include <iostream>
using namespace std;

int main(){
    int n=7;
    int arr[n] = {64,34,25,12,22,11,90};

    for(int i = 0; i<n-1; i++){
        int flag = 0;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                //swapping
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0){
            break;
        }
    }

    //printing the sorted array
    cout<<"the sorted array is: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}