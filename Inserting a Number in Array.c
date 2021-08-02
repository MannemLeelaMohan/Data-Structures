#include<stdio.h>
int main ()
{
    int size,i,pos,ele;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the %d elements\n",size);
    for (i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements before Insertion\n");
    for (i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the position you want to change:\n");
    scanf("%d",&pos);
    printf("\nEnter the element you want to insert:\n");
    scanf("%d",&ele);
    if (pos<=0 || pos>size)
    {
        printf("Invalid position");
    }
    else
    {
        for (i=size-1; i>=pos-1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = ele;
        size++;
        printf("\nElements after Insertion\n");
        for (i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;


}
