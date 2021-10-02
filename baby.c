#include <stdio.h>
/* age checker :) */
int main()
{
	int a;
	printf("\033[34,41,1mEnter your age=");
	scanf("%d",&a);
	if(a>12&&a<20)
	printf("you are teen");
	else if(a>20&&a<50)
	printf("you are Adult");
	else if(a>=50)
	printf("you are Old");
	else if(a>0&&a<=12)	
	printf("you are baby");
	return 0;
}
