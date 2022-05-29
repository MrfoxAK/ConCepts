#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int sorting(int arr[], int n){
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] > arr[j]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}
void cal(int *arr, int size, int n)
{
    int l, r;
    // Fix the first element as A[i]
    for (int i = 0; i < size - 2; i++) {
        // Fix the second element as A[j]
        for (int j = i + 1; j < size - 1; j++) {
            // Now look for the third number
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == n) {
                    printf("Triplet is %d, %d, %d\n",
                           arr[i], arr[j], arr[k]);
                    printf("%i\n", true);
                }
            }
        }
    }
    // printf("%i", false);
}
int main(){
    int size,n;
    printf("Enter Size of the Array : ");
    scanf("%d",&size);
    printf("Enter The Number : ");
    scanf("%d",&n);
    int arr[size];
    printf("Enter Array Element : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    sorting(arr,size);
    cal(arr,size,n);

    return 0;
}
