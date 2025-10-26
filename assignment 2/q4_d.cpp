//program to sort things in alphabetical order

#include <iostream>
using namespace std;

int main(){
    //input string
    string str1;
    cout<<"enter string: ";
    getline(cin,str1);

    //sort by ascii values, apply bubble sort

    for(int i = 0; i<str1.length()-1; i++){
        for(int j =0; j<str1.length()-1-i;j++){
            if(str1[j]>str1[j+1]){
                int temp = str1[j];
                str1[j] = str1[j+1];
                str1[j+1] = temp;
            }
        }
    }

    cout<<"the sorted array is : "<<str1<<endl;
}