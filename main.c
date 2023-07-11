#include "libft.h"

int main()
{
	char *c = " as  58 90 12  as";
	int a;
	int b;
	int c1;

	char **word = ft_split(c, ' ');
	int i = 0;
	while (word[i])
	{
		printf("%s\n", word[i]);
		i++;
	}
	
	a = ft_atoi(word[1]);

}
