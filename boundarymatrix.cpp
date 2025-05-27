#include <stdio.h>

int main(){
	int m,n;
	printf("m: ");
	scanf("%d",&m);
	printf("n: ");
	scanf("%d",&n);
	int a[m][n];
	
	printf("Enter elements: ");
	
	for (int i=0; i<m ; i++){
		for (int j=0; j<n ;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0; i<m ; i++){
		for (int j=0; j<n ;j++){
			if(i==0||i==m-1||j==0||j==n-1)
			printf("%d ",a[i][j]);
			else 
			printf("  ");
		}
			printf("\n");
	}
	return 0;
	
	
	
	
	
	
	
}
