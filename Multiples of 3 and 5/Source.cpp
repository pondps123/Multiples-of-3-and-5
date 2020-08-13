#include <stdio.h> 
int main()
{
	int a, b = 1,sum = 0;
	printf("Enter number : ");
	scanf("%d", &a);
	printf("multiples of 3 or 5 below %d: ",a);
	while (b < a)
	{
		if (b % 3 == 0) 
		{
			printf("%d ", b);
			sum += b;
		}
		else if (b % 5 == 0) 
		{
			printf("%d ", b);
			sum += b;
		}
		b++;
	}
	printf("\nsum of all the multiples of 3 or 5 below %d = %d",a,sum);
	return 0;
}