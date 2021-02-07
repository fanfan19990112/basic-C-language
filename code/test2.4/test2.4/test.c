#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define HEIGHT 7

int main()
{
	const char *letters[] = {
		"\
\########@\
\##      @\
\##      @\
\######  @\
\##      @\
\##      @\
\##      @\
",
"\
\####@\
\ ## @\
\ ## @\
\ ## @\
\ ## @\
\ ## @\
\####@\
",
"\
\ ###### @\
\##    ##@\
\##      @\
\ ###### @\
\      ##@\
\##    ##@\
\ ###### @\
",
"\
\##     ##@\
\##     ##@\
\##     ##@\
\#########@\
\##     ##@\
\##     ##@\
\##     ##@\
",
"\
\ ###### @\
\##    ##@\
\##      @\
\##      @\
\##      @\
\##    ##@\
\ ###### @\
"
	};
	
	int gap = 0;//字符的间隔数
	printf("请输入字符的间隔数 : ");
	scanf("%d", &gap);

	int i, j;
	for (i = 0; i < HEIGHT; i++)
	{
		for (j = 0; j < 5; j++)
		{
			int k = 0;
			int len = strlen(letters[j]) / HEIGHT;
			int line = len * i;
			
			while (letters[j][line + k] != '@')
			{
				putchar(letters[j][line + k]);
				k++;
			}

			int tmp = gap;
			while (tmp--)
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}