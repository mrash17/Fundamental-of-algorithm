//ENRO NO : 19BEIT30005
//NAME : MAKHIJA ASHISH
void print(int a[],int n)
{
    printf("Elements in array are : ");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    print(a,n);
    return 0;
}
