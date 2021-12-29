#include <stdio.h>

int main()
{
	int i;
	char *str;

	i = 0;
	printf("hey friend.....:)\nwelcome to ARB26....\n.\n.\n.\nplease your encoded root26 string here:\n");
     	gets(str);
	while(str[i])
	{
		str[i] -= 26;
		if(str[i] < 33)
			str[i] += 94;
		i++;
	}
	printf("%s", str);
}



