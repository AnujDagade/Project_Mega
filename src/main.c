#include <stdio.h>
//#include "Singly/singlyll.h"
#include "Bubble_Sort/bubble_sort.h"
#include <stdlib.h>

int main() {

    int n,ch = -1;
    float data;
    int *arr;

    printf("Hello, World!\n");
    printf("0. Exit\n1. Bubble sort\n");

    while(ch != 0)
    {
        printf("\nEnter choice: ");
        scanf("%i",&ch);

        switch (ch) {
            case 1:
                printf("\n\t\tEnter size of array: ");
                scanf("%d",&n);
                arr = malloc(sizeof(int)*n);
                Accept(arr,n);
                Display_Arr(arr,n);
                Bubble_sort(arr,n);
                printf("\n\t\tArray after sorting:");
                Display_Arr(arr,n);
                break;
        }
    }
    return 0;
}
