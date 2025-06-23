#include <iostream>
using namespace std;

int MaximumNumber(int a[],int n){
    int Max = a[0];
    for(int i=0;i<n;i++){
      if (a[i] > Max){
        Max = a[i];
      }
    }
    return Max;
}

int MinumumNumber(int a[],int n){
    int Min = a[0];
    for(int i=0;i<n;i++){
      if (a[i] < Min){
        Min = a[i];
      }
    }
    return Min;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Largest Element is:"<<MaximumNumber(a,n)<<endl;
    cout<<"Smallest Element is:"<<MinumumNumber(a,n)<<endl;
}