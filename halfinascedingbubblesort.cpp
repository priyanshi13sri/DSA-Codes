#include<iostream>
using namespace std;

int main() {
    int arr[100]; 
    int n, index;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index: ";
    cin >> index;
   
    for (int i = 0; i < index - 1; i++) {
        int count=0;
        for (int j = 0; j < index - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
        if(count==0)
        break;
    }
   
    for (int i = index; i < n - 1; i++) {
        for (int j = index; j < n - 1; j++) {
          
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
              
            }
        }
        
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
