#include <stdio.h>

// Display array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Insert value at position
int insert(int arr[], int size, int pos, int value) {
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    return size + 1;
}

// Delete from position
int deleteAt(int arr[], int size, int pos) {
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

// Linear search
int LinearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

// Reverse array
void reverse(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// Merge arrays (unsorted)
void mergeArray(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    for (int i = 0; i < size1; i++)
        merged[i] = arr1[i];
    for (int i = 0; i < size2; i++)
        merged[size1 + i] = arr2[i];
}

int main() {
    int arr[100], size, choice, value, pos, key;

    printf("Enter initial size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Display array\n");
        printf("2. Insert value at position\n");
        printf("3. Delete from position\n");
        printf("4. Linear Search\n");
        printf("5. Reverse Array\n");
        printf("6. Merge two arrays\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display(arr, size);
                break;

            case 2:
                printf("Enter position and value to insert: ");
                scanf("%d %d", &pos, &value);
                if (pos < 0 || pos > size) {
                    printf("Invalid position\n");
                } else {
                    size = insert(arr, size, pos, value);
                    printf("Inserted successfully.\n");
                }
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= size) {
                    printf("Invalid position!\n");
                } else {
                    size = deleteAt(arr, size, pos);
                    printf("Deleted successfully.\n");
                }
                break;

            case 4:
                printf("Enter value to search: ");
                scanf("%d", &key);
                pos = LinearSearch(arr, size, key);
                if (pos != -1)
                    printf("Found at position: %d\n", pos);
                else
                    printf("Not found.\n");
                break;

            case 5:
                reverse(arr, size);
                printf("Array reversed.\n");
                break;

            case 6: {
                int arr2[100], merged[200], size2;
                printf("Enter size of second array: ");
                scanf("%d", &size2);
                printf("Enter elements of second array:\n");
                for (int i = 0; i < size2; i++) {
                    scanf("%d", &arr2[i]);
                }
                mergeArray(arr, size, arr2, size2, merged);
                printf("Merged array: ");
                display(merged, size + size2);
                break;
            }

            case 7:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
