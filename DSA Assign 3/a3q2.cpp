//  tc=o(n) sc=o(n)
#include<iostream>
#include<string>
using namespace std;

char pop(string s1,int top) {
    
        if(top!=-1){
            int ans=s1[top];

            
            return ans;
        }
        else{
            cout<<"stack underflow "<<endl;

        }
    }
void reversestring(string s1){
   int top=s1.size()-1;
for(int i=0;i<s1.size();i++){
    cout<<pop(s1,top);
    top--;
}}
        

int main(){
    string s1;
    getline(cin,s1);
    reversestring(s1);
   


    }


//tc=o(n) sc=o(n)
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// int main(){
//     string s1;
//     getline(cin,s1);
//     stack <char> s;
//     for(int i=0;i<s1.length();i++){
//         s.push(s1[i]);
//     }
//    string ans;
   
//    while(!s.empty()){
//         char ch=s.top();
//         ans.push_back(ch);
//         s.pop();


//     }
// cout<<ans;


//     }