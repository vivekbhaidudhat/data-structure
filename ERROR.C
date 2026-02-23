#include<stdio.h>
void main(){
	FILE *fp;
	char c;
	clrscr();
	
	fp = fopen("file2.txt","w");
	c = fgetc(fp);
	
	if(ferror(fp))	
		printf("ERROR IN REDING FROM FILR : FILE2.TXT \n");
	
	clearerr(fp);
	
	if(ferror(fp))
		printf("Error in reading from file : file.txt\n");
	
	fclose(fp);
	
	getch();
}