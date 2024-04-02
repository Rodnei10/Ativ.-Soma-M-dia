#include <stdio.h>
int main()
{
	float media;
	
	printf("digite uma nota:");
	scanf("%f", &media);
	if(media >=6)
	{
		printf("aprovado !", media);
	}
	else 
	{
		printf("reprova !", media);
	}
	
	return 123;
}
