#include <stdio.h>
#include <math.h>
int main() {
	int num,temp;
	scanf("%d",&num);
	
	int count=0;
    temp=num;
	while(temp>0){temp=temp/10;
	count++;
	}
	printf("%d\n",count);

	int divisor=1;
	int i;
	for( i=1;i<count;i++){divisor=divisor*10;
	}
	int temp2=num;
	while(divisor>0){
		int first=temp2/divisor;
		printf("%d",first);
		if(divisor>=10){
			printf(" ");
		}
		temp2=temp2%divisor;
		divisor=divisor/10;
	}
	printf("\n");
	
	int temp3=num;
	while (temp3>0){
		int last=temp3%10;
		printf("%d",last);
		temp3=temp3/10;
	}
	printf("\n");
   return 0;}
