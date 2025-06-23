#include <iostream>
using namespace std;

int main(){
    int n,number,index =0;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number you want to search:";
    cin>>number;
    bool found = false;
    for(int i=0;i<n;i++){
        if(a[i]==number)
        {
            cout<<"Number is at index:"<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Number is not presnet!"<<endl;
    }
    return 0;
}