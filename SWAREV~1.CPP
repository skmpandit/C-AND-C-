#include<stdio.h>
#include<conio.h>
void main()
{
    int array[100], n, c, t, end;
    clrscr();
    printf("Enter the element size:-");
    scanf("%d", &n);
    printf("Enter the %d element:-\n",n);
    end = n - 1;
    for (c = 0; c < n; c++)
    {
	scanf("%d", &array[c]);
    }

    for (c = 0; c < n/2; c++)
    {
	t = array[c];
	array[c] = array[end];
	array[end] = t;
	end--;
    }
    printf("Reversed array elements are:\n");
    for (c = 0; c < n; c++)
    {
	printf("%d\n", array[c]);
    }
    getch();
}