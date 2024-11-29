#include<stdio.h>
#include<string.h>
int main() {
    int reg;
    char nam[100];
    printf("Enter student name :");
    gets(nam);
    printf("Enter student registration number :");
    scanf("%d", &reg);
    printf("\n\n");
    printf("Student name :%s",nam);
    printf("\nStudent registration number :%d",reg);
    printf("\n");
    int N, i, j, P;
    scanf("%d", &N);

    // Check if the number entered is valid
    if (N < 1 || N > 1000) {
        return printf("N should be between 1 and 1000\n");
    }

    int arr1[N][N], arr2[N * N];
    
    // Insert elements into the array
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &arr1[i][j]);
            arr2[i * N + j] = arr1[i][j];
        }
    }

    // Sorting the array
    for (i = 0; i < N * N - 1; i++) {
        for (j = 0; j < N * N - i - 1; j++) {
            if (arr2[j] < arr2[j + 1]) {
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    // Check if the numbers entered are valid
    scanf("%d", &P);
    if (P < 1 || P > N * N) {
        return printf("P should be between 1 and %d\n", N * N);
    }

    // Find the Pth largest element in the sorted array
    int target = arr2[P - 1];

    // Searching for the element
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (arr1[i][j] == target) {
                // finding the position in the original matrix
                printf("%d %d %d\n", i, j, arr1[i][j]);
                return 0;
            }
        }
    }

    return 0;
}