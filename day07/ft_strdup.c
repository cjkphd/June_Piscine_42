#include <string.h>
#include <stdio.h>

char *ft_strdup(const char *s1)
{
	int len;
	char *dupe;

	len = 0;
	while (s1[len])
		len++;
	dupe = (char)malloc(sizeof(char) * (len + 1));
	if (!dupe)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		dupe[len] = s1[len];
		len++;
	}
	dupe[len] = '\0';
	return (dupe);
}

int	main()
{
	printf("%s\n", ft_strdup("monster"));
	prtinf("%s\n", strdup("monster"));
	return 0;
}
