#include<bits/stdc++.h>
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
      for (int r=0;r<i;r++){
        for(int c=0;c<j;c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
    int sum_by_row=0,sum_by_column=0;
   
    for (int r=0;r<i;r++){
        for(int c=0;c<j;c++){
            sum_by_row+=arr[r][c];
          
           
        }
          cout <<"sum of"<<r<<"row is"<<sum_by_row<<endl;
         sum_by_row=0;
    }
     for(int c=0;c<j;c++){
     for (int r=0;r<i;r++){
      
            sum_by_column+=arr[r][c];
           
           
        }
         cout <<"sum of"<<c<<"column is"<<sum_by_column<<endl;
         sum_by_column=0;
    }

}