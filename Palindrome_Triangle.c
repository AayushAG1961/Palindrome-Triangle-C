#include<stdio.h>

void main()
{ 
	int i, j, k, n, m;
	printf("Enter no of rows: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		{ //This is the outer loop. 
			for(j=0;j<n-i;j++)
				{ //Loop that prints spaces. It runs n-i times. 
					printf(" ");
				} 
			m=i+1; //The middle number
			for(k=1;k<=m;k++)
				{ //Prints numbers uptil the middle number 
					printf("%d", k);
				}
			for(k=m-1;k>=1;k--)
				{ //Printf numbers from the middle number to 1 
					printf("%d", k);
				} 
			printf("\n"); //Sending cursor to the next line
		}
}
