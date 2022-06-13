// In this we are just reverseing the entire array physically.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class reversearray{
    private:
      int a[100],i,j,n;
    public:
      void get(){
        cout<<"Enter the size of array:";
        cin>>n;
        cout<<"Enter the element s of the array:";
        for(i=1;i<=n;i++)
         cin>>a[i];
        cout<<"Before reversing the array elements:";
        for(i=1;i<=n;i++)
          cout<<a[i]<<" ";
        cout<<endl;
      }
      void swapping(){
        i=1;j=n;
        while(i<j){
            swap(a[i], a[j]);
            i=i+1;
            j=j-1;
        }
      }
      void show(){
        cout<<"After reversing the array elements:";
        for(i=1;i<=n;i++)
          cout<<a[i]<<" ";
      }
};
int main(){
    reversearray ra;
    ra.get();
    ra.swapping();
    ra.show();
    return 0;
}
