#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 50

int main(int argc, char *argv[]) {
	
	FILE*	fp;
	char		str[MAX_LENGTH];
	int		id;
	
	if (argc < 2) {
		printf("�t�@�C���������͂���Ă��܂���B\n");
		exit(EXIT_FAILURE);
	}
	
	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("�w�肳�ꂽ�t�@�C�����J���܂���B\n");
		exit(EXIT_FAILURE);
	}
	
	for (id = 1; fgets(str, MAX_LENGTH, fp); id++) {
		printf("%d:%s", id, str);
	}
	
	fclose(fp);
	
	return 0;
}