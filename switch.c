#include<stdio.h>
main()
{
	int a=0;
	printf("\n Order your food,here!");
	printf("\n 1. Pizza        Rs.239 \n 2. Burger       Rs.129 \n 3. Pasta        Rs.179 \n 4. French Fries Rs.99 \n 5. Sandwich     Rs.149");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			printf("\n Food Item - Pizza \n Price - Rs 239 ");
			break;
		case 2:
			printf("\n Food Item - Burger \n Price - Rs 129 ");
			break;
		case 3:
			printf("\n Food Item - Pasta \n Price - Rs 179 ");
			break;
		case 4:
			printf("\n Food Item - French Fries \n Price - Rs 99 ");
			break;
		case 5:
			printf("\n Food Item - Sandwich \n Price - Rs 149 ");
			break;
		default:
			printf("Not the appropriate choice");
			
		
	}
	return 0;
}
