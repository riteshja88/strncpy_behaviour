#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10 + 1] = "AAAAAAAAAAA";
	printf("char s1[10 + 1] = \"AAAAAAAAAAA\";\n");
	for(int i=0;i<=10;i++) {
		printf("s1[%02d] %d\n",i,s1[i]);
	}
	strncpy(s1, "abc",10);
	printf("\n");
	printf("strncpy(s1, \"abc\",10);\n");
	for(int i=0;i<=10;i++) {
		printf("s1[%02d] %d\n",i,s1[i]);
	}
	return 0;
}
