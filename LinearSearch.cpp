// In this problems we are just visiting every element in the array and cheking 
// Whether key=element.
#include<iostream>
using namespace std;
int main(){
    int A[100],n,key,i,loc;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
      cin>>A[i];
    cout<<"Enter the key:";
    cin>>key;
    for(i=0;i<n;i++){
      if(key==A[i]){
        loc=i;
        break;
      }
      else
        loc=-1;
    }
    if(loc!=-1)
      cout<<"Element found at "<<loc<<endl;
    else
      cout<<"Element "<<key<<" not found"<<endl;
    return 0;
}