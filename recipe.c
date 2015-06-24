#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 50

/*RECIPE構造体の定義*/
struct RECIPE{
             char *recipe_title;
             int recipe_id;
             };

int main(int argc, char *argv[]) {
	
	FILE*	fp;
	char		str[MAX_LENGTH];
	int		id;
  int id_selected;
  struct RECIPE recipe[255];

  id_selected=atoi(argv[2]);	

	if (argc < 2) {
		printf("ファイル名が入力されていません。\n");
		exit(EXIT_FAILURE);
	}
	
	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("指定されたファイルが開けません。\n");
		exit(EXIT_FAILURE);
	}
	
	for (id = 1; fgets(str, MAX_LENGTH, fp); id++) {
		printf("%d:%s", id, str);
    recipe[id].recipe_id=id;
    recipe[id].recipe_title=str;
	}

	fclose(fp);

		printf("Selected recipe is %d:%s", recipe[id_selected].recipe_id, recipe[id_selected].recipe_title);

	
	return 0;
}
