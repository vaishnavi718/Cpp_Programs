#include <iostream>
using namespace std;

int main(){
    int n,total=0;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        total =total + a[i];
    }
    cout<<"Total is:"<<total<<endl;
    return 0;
}