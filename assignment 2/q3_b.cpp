//finding miss
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n){
    int l = 0;
    int r = n-2;

    while(l<=r){
        int mid = (l+r)/2;
        int index = mid;
        if(arr[mid] == index+1){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }

    }
    return l+1;
}

int main(){
    int n=10;
    int arr[n-1] = {1,2,3,5,6,7,8,9,10};
    int missing = binarySearch(arr,n);

    cout<<"the missing number is: "<<missing<<endl;
}