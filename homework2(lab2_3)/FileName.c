#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	printf("%4d\n", 2);
	printf("%4d\n", 1323);
	printf("%13s\n", "_____________");
	printf("%+012.7f\n", 2. / 1323);
}