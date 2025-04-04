/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarzia <mgarzia@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:17:59 by mgarzia           #+#    #+#             */
/*   Updated: 2025/04/04 18:03:09 by mgarzia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 	get_next_line()
		char *get_next_line(int fd);
		
		return (ptr);
		ptr = se restituisce riga
		NULL = EOF, errore (fd invalid)
		
		1. apre fd
		2. legge file e memoriazza dati in un buffer
		3. controlla se in buffer c'è \n
		4. se non c'è \n legge nuovo blocco di file e concatena con vecchio 
			blocco
		4. se trova \n rialloca stringa fino \n in una nuova stringa
		5. cancella stringa estratta dal buffer
		ma conserva tutto dopo \n
		6. restituisce stringa estratta. Altrimenti NULL se EOF o errore
		7. libera risorse

		2. alloca e concatena stringa vecchia e nuova
		3. restituisce ptr a stringa completa


	open()
		int open(const char *pathname, int flags, ...);
		
		int fd = file aperto
		-1 = errore

		1. apre file e gestisce flag
		2. restituisce fd come int

		fcntl.h

	read()
		ssize_t read(int fd, void *buf, size_t count);	
		
		ssize_t byte letti
		0 = EOF
		-1 = errore (fd non valido, errore di sistema)

		1. apre fd
		2. legge stringa dati
		3. restituisce ssize_t byte letti

		unistd.h
	
	printf()
		int printf(const char *format, ...);
		
		int caratteri stampati = se stampa
		-1 = errore

		1. analizza formato e format specifier
		2. sostituisce format specifier
		3. stampa risultato su stdout 

		stdio.h
	
	malloc()
		void *malloc( size_t size );
		
		void *ptr a stringa = se alloca
		NULL = se non alloca
		
		1. richiede memoria al sistema operativo
		2. restituisce puntatore alla memoria allocata

		stdlib.h
	
	argc argv
		int argc =  numero argomenti
		char *argv[] = array di stringhe (i parametri) (char**)
	
	free()
		void free(void *ptr);
		
		1. libera della memoria precedentemente allocata.

		stdlib.h
		
		controlla memoria non liberata (memory leak):
		valgrind --leak-check=full ./gnl

		
*/

#include "libft.h"

char	*read_line(int fd, char *buf)
{
	char	*temp;
	int		rdbyte;

	rdbyte = 1;
	temp = malloc(BUFFER_SIZE + 1);
	if (temp == NULL)
		return (NULL);
	while (there_is_newline(buf) == 0 && rdbyte != 0)
	{
		rdbyte = read(fd, temp, BUFFER_SIZE);
		if (rdbyte == -1)
		{
			free(buf);
			free(temp);
			return (NULL);
		}
		temp[rdbyte] = '\0';
		buf = string_join(buf, temp);
	}
	free(temp);
	return (buf);
}

char	*new_line(char *buf)
{
	size_t	i;
	char	*line;

	if (buf == NULL || buf[0] == '\0')
		return (NULL);
	i = ft_strlen_c(buf, '\n');
	line = malloc(i + (buf[i] == '\n') + 1);
	if (line == NULL)
		return (NULL);
	i = 0;
	while (buf[i] != '\0' && buf[i] != '\n')
	{
		line[i] = buf[i];
		i++;
	}
	if (buf[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

void	delete_newline_from_buffer(char **buf)
{
	char	*tmp;
	size_t	len;
	size_t	j;

	tmp = *buf;
	if (tmp == NULL)
		return ;
	len = ft_strlen_c(tmp, '\n');
	if (tmp[len] == '\0')
	{
		free(tmp);
		*buf = NULL;
		return ;
	}
	*buf = malloc(ft_strlen_c(tmp, '\0') - len);
	if (*buf == NULL)
		return ;
	len++;
	j = 0;
	while (tmp[len] != '\0')
		(*buf)[j++] = tmp[len++];
	(*buf)[j] = '\0';
	free(tmp);
}

char	*get_next_line(int fd)
{
	static char	*buf[1024];
	char		*line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	buf[fd] = read_line(fd, buf[fd]);
	if (buf[fd] == NULL)
		return (NULL);
	line = new_line(buf[fd]);
	delete_newline_from_buffer(&buf[fd]);
	return (line);
}

// #include <stdio.h>
// #include <fcntl.h>
// #include <stdlib.h>

// int main(void)
// {
//     int fd1, fd2;
//     char *line;

//     fd1 = open("test.txt", O_RDONLY);
//     fd2 = open("test_lungo.txt", O_RDONLY);

//     if (fd1 < 0 || fd2 < 0)
//     {
//         perror("Errore apertura file");
//         return (1);
//     }

//     printf("=== LETTURA MULTIPLA ===\n");
//     while ((line = get_next_line(fd1)) || (line = get_next_line(fd2)))
//     {
//         if (line)
//         {
//             printf("%s", line);
//             free(line);
//         }
//     }

//     close(fd1);
//     close(fd2);

//     return (0);
// }
