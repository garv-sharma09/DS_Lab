#include<iostream>
using namespace std;
int n;
void create(int n,int arr[]){
    cout<<"enter the elements";
     for(int i=0;i<n;i++){
            cin>>arr[i];

}}
void display(int n,int arr[]){
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";

}
cout<<endl;
}
void insert(int n,int arr[]){
    int num ;
    int pos;
    cout<<"enter the number to add";
    cin>>num;
    cout<<"enter the position";
    cin>>pos;
    n++;
      for(int i=n;i>=pos;i--){
            arr[i]=arr[i-1];

}
arr[pos-1]=num;
  for(int i=0;i<n;i++){
            cout<<arr[i];

}

}
void deleteele(int &n, int arr[]){
    int num;
    cout << "Enter the number to delete: ";
    cin >> num;

    int pos = -1;
    
    for(int i=0; i<n; i++){
        if(num == arr[i]){
            pos = i;
            break; 
        }
    }

    if(pos == -1){
        cout << "Element not found!" << endl;
        return;
    }

    
    for(int i=pos; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    n--; 

    cout << "Array after deletion: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void linear_search(int n,int arr[]){
     int num ;
    
    cout<<"enter the number to search";
    cin>>num;
    int pos = -1;
for(int i=0; i<n; i++){
    if(num==arr[i]){
        pos = i;
        break;
    }
}
if(pos != -1)
    cout << num << " is at position " << pos+1;
else
    cout << num << " not found";


}
void exit_menu(){
    cout<<"exiting the menu";

}
int main(){
    int menu;
    cout<<"enter the number of element in array";
    
    cin>>n;
    int arr[n];
  
    do{
   cout<< " 1) Develop a Menu driven program to demonstrate the following operations of Arrays \n MENU1 \n1.CREATE \n2. DISPLAY \n3. INSERT \n4. DELETE \n5. LINEAR SEARCH\n 6. EXIT ";
     cout<<"enter what to do";
   cin>>menu;
   switch(menu){
    case 1: create(n,arr);
        break;
    case 2: display(n,arr);
        break;
    case 3: insert(n,arr);
        break;
    case 4: deleteele (n,arr);
        break;
    case 5:linear_search(n,arr);
        break;
    case 6 :exit_menu();
        break;
    default:cout<<"invalid input";

}

    }while(menu!=6);
}