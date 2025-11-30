//Q5. Write a program for transposing a 3 X 3 matrix.
#include <stdio.h>
int main(){
	int R,C;
	int arr[3][3];
	printf("Enter the elements of the matrices: ");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The transpose of the given matrix is:");
	for(int i=0;i<3;i++){
		printf("\n");
		for(int j=0;j<3;j++){
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
