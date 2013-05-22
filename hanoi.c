#include <stdio.h> 

void hanoi(int n, char x, char y, char z)
{
	if(n == 1)
		printf("Diski %c cubugundan %c cubuguna koy\n",x,z);
	else {
		hanoi(n - 1, x, z, y);
		hanoi(1, x, y, z);
		hanoi(n - 1, y, x, z);
		
	}
}

int main()
{
	int n;
	printf("kac tane disk var: ");
	scanf("%d",&n);
	getchar();
	hanoi(n, 'A', 'B', 'C');
	getchar();
	return 0;
}
