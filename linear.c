int main()
{
	int target,n;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter the elements");
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enetr element you want to search");
	scanf("%d",&target);
	for(int i=0;i<n;i++)
	{
		if(target==a[i])
		{
			printf("Element is found at index %d",i);	
			return 0;
		}
	}
	printf("Element not found");
	return 0;1
}