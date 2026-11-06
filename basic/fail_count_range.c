#include<stdio.h>
int main(){
	int n,x,y,temp;
	scanf("%d%d%d",&n,&x,&y);
	int max;
	if(x>y){max=y;
	}else{max=x;
	}
	int min;
	if(x+y<=n){min=0;}
	else{min=x+y-n;
	}
	printf("%d %d\n",max,min);
	return 0;
}
