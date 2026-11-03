#include <stdio.h>
#include<math.h>
int main() {
	char city;
    double n;
    int yuan;
    scanf(" %c",&city);
    scanf("%lf", &n);
    if(n>=1){n=ceil(n);
	}else{n=1;
	}
	if (city=='A') {yuan=10+4*(n-1); 
    }else if(city=='B'){yuan=12+5*(n-1);
	}else{yuan=14+6*(n-1);
	}
    printf("%d\n",yuan);
    return 0;
}
