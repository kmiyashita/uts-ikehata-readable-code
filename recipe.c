#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 50

int main(void) {
	
	FILE* fp;
	char   str[MAX_LENGTH];
	
	if ((fp = fopen("recipe-data.txt", "r")) == NULL) {
		printf("ファイルが開けません。\n");
		exit(EXIT_FAILURE);
	}
	
	while (fgets(str, MAX_LENGTH, fp)) {
		printf("%s", str);
	}
	
	fclose(fp);
	
	return 0;
}