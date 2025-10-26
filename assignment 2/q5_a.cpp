//diagaonal matrix
#include <iostream>
using namespace std;
// we need to store only n diagonal elements in an array of n size

int main(){
    //input size of matrix
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    //array of size n
    int arr[n];

    //input array with diagonal elements;
    cout<<"Enter "<<n<<" diagonal elements: "<<endl;
    for(int i=0; i<n; i++){
        cout<<i+1<<").";
        cin>>arr[i];
    }
    cout<<"\n";
    //printing the matrix
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if (i==j){
                cout<<arr[j]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}