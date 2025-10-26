#include<iostream>
using namespace std;
int main(){
      int row1,col1;
    cout <<"enter size row1 and col1";
    cin>>row1>>col1;
   
    int arr[row1][col1];
    for (int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>arr[i][j];
        }
    }
      for (int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     int row2,col2;
    cout <<"enter size k and l";
    cin>>row2>>col2;
   
    int brr[row2][col2];
    for (int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>brr[i][j];
        }
    }
      for (int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    if(col2==row1){
        int mul[row1][col2];
    
      for (int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<row2;k++){
            mul[i][j]+=arr[i][k]*brr[k][j];
        }
        }
        cout<<endl;
    }

    
       for (int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
}
else{
    cout<<"not possible";
}
}
