#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 
    printf("Enter the element to search: ");
    scanf("%d", &key); 
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    } 
    if(found)
        printf("Element %d found at position %d\n", key, i + 1);  
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}

