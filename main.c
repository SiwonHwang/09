#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp;
	char input;
	//char input[100];
	
	fp = fopen("sample.txt", "r");
	
	while ( (input=fgetc(fp)) != EOF)
	{
		putchar(input);
	} //한 글자씩 읽어오는 방법 
	
	fclose(fp);
	
	/*
	while ( fgets(input, 100, fp) != NULL)
	{
		printf(input);
	}
	*///한 단어씩 읽어오는 방법  
		
	return 0;
}
