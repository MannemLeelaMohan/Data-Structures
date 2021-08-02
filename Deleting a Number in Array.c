#include<stdio.h>
int main ()
{
    int size;
    printf("Enter the size of element:\n");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the %d elements:\n",size);
    for (int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nElements before deletion:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    int pos;
    printf("\nEnter the position you want to delete:\n");
    scanf("%d",&pos);
    if (pos<=0 || pos>size)
    {
        printf("INVALID POSITION");
    }
    else
    {
        for (int i=pos-1; i<size-1; i++)
    {
        arr[i]= arr[i+1];
    }
    size--;
    printf("\nElements after deletion:\n");
    for (int i =0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    }

    return 0;
}
