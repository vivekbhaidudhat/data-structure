#include<stdio.h>
#include<conio.h>
void main(){
	FILE *v;
	int r;
	clrscr();
	v=fopen("getw.txt","w");
	for(r=1;r<=10;r++ ){
		putw(r,v);

	}
	fclose(v);
	v=fopen("getw.txt","r");
	for(r=1;r<=10;r++ ){
		r=getw(v);
		printf("%d",r);
		printf(" ");

	}
	fclose(v);



	getch();
}