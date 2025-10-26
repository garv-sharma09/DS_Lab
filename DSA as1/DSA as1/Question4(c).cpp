#include<iostream>
using namespace std;

int main(){
     int i,j;
    cout <<"enter size i and j";
    cin>>i>>j;
   
    int arr[i][j];
    for (int r=0;r<i;r++){
        for(int c=0;c<j;c++){
            cin>>arr[r][c];
        }
    }
    cout<<"\n";
      for (int r=0;r<i;r++){
        for(int c=0;c<j;c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
     cout<<"\n";
      for (int r=0;r<j;r++){
        for(int c=0;c<i;c++){
            cout<<arr[c][r]<<" ";
        }
        cout<<endl;
    }

}