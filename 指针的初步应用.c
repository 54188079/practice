/*#include<stdio.h>
void minmax(int a[], int len, int* max, int* min);
int main()
{
	int a[] = { 1,23,46,55,34,57,82,19,20,39 };
	int min, max;
	minmax(a, sizeof (a) / sizeof (a[0]), &min, &max);
	printf("%d,%d\n", min, max);
	return 0;
}
void minmax(int a[], int len, int* min, int* max)
{
	int i;
	*min = *max = a[0];
	for (i = 0; i < len; i++)
	{
		if (a[i] < *min)
		{
			*min = a[i];
		}
		if (a[i] > *max)
		{
			*max = a[i];
		}
	}
}*/