#include<conio.h>
#include<stdio.h>
void main(int argc, char *argv[]){
	int i;
	clrscr();
	
	printf("no. of ARGUMENT : %d",argc);
	
	for(i=0;i<argc;i++){
		printf("\nARGUMENT[%d] : %s",i,argv[i]);
	}
	
	getch();
}