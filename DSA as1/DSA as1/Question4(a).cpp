#include<iostream>
using namespace std ;
int main(){
    int size,i;
    cout <<"enter size i ";
    cin>>size;
   
    int arr[size];
    for (int i=0;i<size;i++){
        
            cin>>arr[i];
        }
    
    cout<<" \n";
     for ( i=0;i<size;i++){
        
            cout<<arr[i];
        }
    //1 2 3 4 5 
    //0 1 2 3 4 
    int temp;
     cout<<" \n";
    for(i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;

    }
     for ( i=0;i<size;i++){
        
            cout<<arr[i]<<endl;
        }
}