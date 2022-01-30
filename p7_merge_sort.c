//19BEIT30005 ASHISH MAKHIJA
#include<stdio.h>
#include<conio.h>
void mergeSortArray(int arr[],int lb,int ub,int mid)
{
    int i,j,k;
    int temp[100];
    for(i=lb,j=mid+1,k=lb;i<=mid && j<=ub;k++)
    {


                if(arr[i]<arr[j])
                {
                    temp[k] = arr[i];
                    i++;
                }
                else
                {
                    temp[k] = arr[j];
                    j++;
                }
    }

        while(j<=ub)
        {
            temp[k] = arr[j];
            k++;j++;
        }

        while(i<=mid)
        {
            temp[k] = arr[i];
            k++;i++;
        }
    for(i=lb;i<=ub;i++)
    {
        arr[i]=temp[i];
    }
}
void mergeSort(int a[] , int lb , int ub)
{
    if(lb<ub)
    {
       int mid = (ub+lb)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        mergeSortArray(a,lb,ub,mid);
    }
}
int main()
{
    int a[]={5,7,13,3,8,9};
    mergeSort(a,0,5);
    printf("The new sorted array is :");
    for(int i=0;i<6;i++)
    {
        printf("\n%d" ,a[i]);
    }
}

