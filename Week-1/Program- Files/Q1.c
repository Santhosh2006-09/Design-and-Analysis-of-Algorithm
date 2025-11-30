//Q1. Write a program to find the sum of first n natural numbers using user defined functions.
#include <stdio.h>
int sum(int n){
	int sum=0;
	for (int i = n; i>0; i--){
		sum+=i;
	}
	return sum;
}
int main(){
	int n,sum1;
	printf("Enter the number of numbers: ");
	scanf("%d", &n);
	sum1 = sum(n);
	printf("The sum of first %d natural numbers is %d\n", n, sum1);
	return 0;
}	
