#include <stdio.h>

int main()
{
	int i;
	char *str;

	i = 0;
	printf("hey friend.....\nwelcome to ARB26....\nnow quicly give me your dumb string...\ni feel bored solving this shiit...\n\n\nyour string here please:\n");
     	gets(str);
	while(str[i])
	{
		str[i] -= 26;
		if(str[i] < 33)
			str[i] += 94; 
	//	normal(str);
		i++;
	}
	printf("%s", str);
}



