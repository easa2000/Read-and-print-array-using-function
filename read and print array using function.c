// read and print array using function

#include<stdio.h>
void read_array(int arr[], int);
void print_array(int arr[], int);
void main(){
    int num[10],n;
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    read_array(num, n);
    print_array(num, n);
}

void read_array(int arr[10], int n)
{
    int i;
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void print_array(int arr[10], int n)
{
    int i;
    printf("\n The elements of the array are \n");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }
}
