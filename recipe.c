#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 50

int main(int argc, char *argv[]) {
	
	FILE* fp;
	char   str[MAX_LENGTH];
	
	if (argc < 2) {
		printf("ファイル名が入力されていません。\n");
		exit(EXIT_FAILURE);
	}
	
	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("指定されたファイルが開けません。\n");
		exit(EXIT_FAILURE);
	}
	
	while (fgets(str, MAX_LENGTH, fp)) {
		printf("%s", str);
	}
	
	fclose(fp);
	
	return 0;
}