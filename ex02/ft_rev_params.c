#include <unistd.h>

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return length;
}

void	ft_putstr(char *str)
{
	unsigned int	length;

	length = ft_strlen(str);
	write(1, str, length);
}

int		main(int argc, char *argv[])
{
	while (--argc)
	{
		ft_putstr(argv[argc]);
		ft_putstr("\n");
	}
}
