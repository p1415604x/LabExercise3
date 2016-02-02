//This is the line causing issue in the conflict branch
//This is the second line causing issue in the <master/*conflict> branch
#include <stdio.h>

int main()
{
    int c,i,a[5],min,max;
	min=999;
	max=0;
    printf("2+2=%i\n", c=2+2);
    printf("2-2=%i\n", c=2-2);
    printf("2*2=%i\n", c=2*2);
    printf("2/2=%i\n", c=2/2);
    printf("3%2=%i\n", c=3%2);
    printf("Enter 5 variables");
    for(i=0; i<5; i++) {
	scanf("%i"),&a[i]);	}

    for(i=5; i>0; i--) {
	if (max < a[i]) 
	max = a[i];}	

 	for(i=5; i>0; i--) {
		if (min > a[i]) 
		min = a[i];}		
    return 0;
}
