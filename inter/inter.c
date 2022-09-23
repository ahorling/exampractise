#include <unistd.h>

int	checker(char *string, char character, int i)
{
	while (i >= 0)
	{
		if (string[i] == character)
			return (0);
		i--;
	}
	return (1);
}


int	main(int argc, char **argv)
{
	int i;
	int	j;
	int flag;

	i = 0;
	j = 0;
	flag = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return(0);
	}

	while (argv[1][i] != '\0')
	{
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				flag = checker(argv[1], argv[1][i], i - 1);
				if (flag == 1)
					write(1, &argv[1][i], 1);
				break;
			}
			j++;
		}
		i++;
	}

	write(1, "\n", 1);
	return (0);
}