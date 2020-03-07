#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0, k = 0, i, b[101], j, aux;
	printf("Introduceti numarul:");
	scanf("%d", &n);
	while (n != 0)
	{
		b[k++] = n % 2;
		n = n / 2;
	}
	for (i = k - 1; i >= 0; i--)
		printf("%d", b[i]);
	printf("\n");
	for(i=0;i<k;i++)
		for(j=i+1;j<=k;j++)
			if (b[i] < b[j])
			{
				aux = b[i];
				b[i] = b[j];
				b[j] = aux;
			}
	for (i = 0; i < k; i++)
		printf("%d", b[i]);
	printf("\n");

	system("pause");
	return 0;

}