//find missing number through linear search
#include <iostream>
using namespace std;

int main(){
    //sorted array of 1 to n-1 numbers
    int n=10;
    int arr[n-1] = {1,2,3,4,6,7,8,9,10};
    //missing num = sum of 1 to 10 - sum of array elements
    int sum = (n*(n+1)/2);
    int arr_sum = 0;
    for(int i = 0; i<n-1; i++){
        arr_sum += arr[i];
    }

    int missing = sum - arr_sum;

    cout<<"the missing number is: "<<missing<<endl;

}