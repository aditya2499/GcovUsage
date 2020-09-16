/*
 * C program to find whether triangle is possible
 * when 3 sides are given.
 * If possible, find its type.
 */
 

#include <stdio.h>

/*
 * return 1 for right angle triangle
 * return 2 for equilateral triangle
 * return 3 for isoceles triangle
 * retrun 0 for scalene triangle
 */
int findType (int a,int b, int c){
	
	int aSq = a*a;
	int bSq = b*b;
	int cSq = c*c;
	
	if(aSq + bSq == cSq || bSq + cSq == aSq || aSq + cSq == bSq)
		return 1;
	
	if(a == b && a == c)
		return 2;
	
	if((a == b && a != c) || (a == c && a != b))
		return 3;
	
	else	
		return 0;		
}

int checkValidity (int a ,int b, int c){
	
	if(a+b <= c || b+c <= a || a+c <=b )
		return 0;
	else 
		return 1;	
}

int main(){

	int a, b, c;
	
	printf("Enter the 3 sides of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	
	int isValid = checkValidity(a,b,c);
	
	if(isValid){
		int type = findType(a,b,c);
		
		if(type == 1)
			printf("these edges form a right angle triangle");
		
		else if(type == 2)
			printf("These edges form a equilateral triangle");
		
		else if(type == 3)
			printf("Triangle formed is Isosceles triangle");
		
		else 
			printf("triangle is Scalene Triangle");			
	}

	else 
		printf("These edges don't form a triangle");
		printf("\n");
	return 0;
}
