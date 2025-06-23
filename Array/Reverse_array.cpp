#include<iostream>
using namespace std;

int main(){
        int n;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start =0,end = n-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;

    }
    cout<<"Array is:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}