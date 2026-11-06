#include<stdio.h>
#include<math.h>
int main(){
	int feet;
	scanf("%d",&feet);
	int max=feet/2;
	int min=feet/4+(feet%4)/2;
	printf("%d %d\n",min,max);
	return 0;
}
