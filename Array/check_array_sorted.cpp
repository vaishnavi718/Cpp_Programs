#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    bool is_sorted = true;

    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            is_sorted = false;
            break;
        }
    }

    if(is_sorted) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
