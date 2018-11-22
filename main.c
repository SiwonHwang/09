#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[100] = "Programming course";
	
	int i=0; 
	
	while (src[i] != '\0')
	{
		i++;
	}
	
	printf("%s (%d)\n", src, i);
	printf("%i", strlen(src)); // 문자열 길이 계산 
	
	
	//strcpy(dst, src) : 문자열 복사 
		
	return 0;
}
