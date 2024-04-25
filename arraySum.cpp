#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the numbers: ";
    cin >> num;

int arr [num];

while(true){
    if(num<=5){
        
    for (int i = 0; i < num; ++i) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < num; ++i) {
        
        if(i<num-1){
            cout<<arr[i]<<"+";
        }
            else{
                 cout<<arr[i]<<"=";
            }
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;
break;

    }
    else{
         cout << "Enter the numbers: ";
    cin >> num;
    }
}

    return 0;
}


