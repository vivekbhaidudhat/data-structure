// int feof(FILE *stream)

#include<stdio.h>
#include<conio.h>
void main ()
{
	FILE *fp;
	int c;

	fp = fopen("file.txt","r");
	while(1)
	{
		c = fgetc(fp);

		if( feof(fp) )
		{
			break;
		}
		printf("%c", c);
	}
	fclose(fp);
	getch();
}