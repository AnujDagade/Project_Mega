//
// Created by drcool on 2/1/22.
//
#include <stdio.h>
#include "bubble_sort.h"
void Accept(int arr[],int n)
{

    for(int i = 0; i<n; i++)
    {
        printf("\n\t\tEnter array element arr[%i]: ",i);
        scanf("%d",&arr[i]);
    }

}

void Display_Arr(int arr[],int n)
{

    printf("\n\t\tArray is:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
}

void Bubble_sort(int arr[], int n)
{
    int temp = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}