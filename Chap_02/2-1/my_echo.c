#include <stdio.h>

//int main __P((int, char *[]));

//int main(int argc, char *argv[])
int main(argc, argv)
	char *argv[];
	int argc;
{
	printf("Hello\n");

	while (*argv) {

		printf("%s", *argv);

		argv++;
	}

	return 0;
}
