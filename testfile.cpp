#include <stdio.h>
int main(){
	FILE *fp;
	int ch;
	int c;
	fp = fopen("file1.txt","w+");
	for ( ch=65;ch<= 91;ch++){
		fputc(ch,fp);
	}
	fclose(fp);
	return(0);
}
