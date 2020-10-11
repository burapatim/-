#include<stdio.h>
void function() 
{
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	for (int i = 1;i <= x;i++) {
		for (int j = x;j >= i;j--) {
			printf("*");
		}
		for (int j = 1;j <= i;j++) {
			printf(" ");
		}
		for (int j = 2;j <= i;j++) {
			printf(" ");
		}
		for (int j = x;j >= i;j--) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 2;i <= x;i++) {
		for (int j = 1;j <= i;j++) {
			printf("*");
		}
		for (int j = x;j >= i;j--) {
			printf(" ");
		}
		for (int j = x-1;j >= i;j--) {
			printf(" ");
		}
		for (int j = 1;j <= i;j++) {
			printf("*");
		}
		printf("\n");
	}


}
int main() {
	function();
	return 0;
}