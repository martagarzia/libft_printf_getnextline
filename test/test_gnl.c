#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	int		fd = open("test.txt", O_RDONLY);
	char	*line;

	if (fd < 0)
	{
		ft_printf("Errore apertura file\n");
		return (1);
	}
	while ((line = get_next_line(fd)))
	{
		ft_printf("LINE: %s", line);
		free(line);
	}
	close(fd);
	return (0);
}
