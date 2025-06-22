#include <stdio.h>

int main() {
    int a[100], b[100], m[200], n1, n2, i;
    
    printf("Enter size of 1st and 2nd array: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Enter %d elements for 1st array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter %d elements for 2nd array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    
    // Copy a[] to m[]
    for(i = 0; i < n1; i++) {
        m[i] = a[i];
    }
    
    // Copy b[] to m[] after a[]
    for(int j = 0; j < n2; j++) {
        m[n1 + j] = b[j];
    }
    
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", m[i]);
    }
    
    return 0;
}

