//lower triangular matrix
#include <iostream>
using namespace std;
//elements - n(n+1)/2
int main(){
    int n;
    cout<<"Enter size of matrix: ";
    cin>>n; 
    int elements = n*(n+1)/2;
    int arr[elements];

    cout<<endl;
    cout<<"please enter "<<elements<<" elements: "<<endl;
    for(int i=0; i<elements; i++){
        cout<<i+1<<") ";
        cin>>arr[i];
    }

    cout<<endl;

    //printing the matrix 
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if( i>= j){
                cout<<arr[((j-1)*(2*n-j+2)/2)+(i-j)]<<" ";//formula for index using summation formulas
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

}