#include <unistd.h>

int	checker(char c, int i, char *string)
{
	while (i >= 0)
	{
		if (string[i] == c)
			return (0);
		i--;
	}
	return (1);
}

int checker2(char *string1, char c)
{
	int i;

	i = 0;
	while (string1[i])
	{
		if (string1[i] == c)
			return (0);
		i++;
	}
	return (1);
}


int	main(int argc, char **argv)
{
	int i;
	int flag;
	int flag2;
	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[1][i])
	{
		flag = checker(argv[1][i], i - 1, argv[1]);
		if (flag == 1)
			write(1, &argv[1][i], 1);
		i++;
	}

	i = 0;
	while (argv[2][i])
	{
		flag2 = checker2(argv[1], argv[2][i]);
		if (flag2 == 1)
		{
			flag = checker(argv[2][i], i - 1, argv[2]);
			if (flag == 1)
				write(1, &argv[2][i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}