/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 16:07:51 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/04/09 13:14:42 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	t_dict	*head;
	char	*line;
	int		ret;

	head = calloc(1, sizeof(t_dict));
	while (1)
	{
		line = strdup("");
		ret = get_next_line(STDIN_FILENO, &line);
		if (ret <= 0)
			return (0);
		parse(head, line);
		free(line);
	}
	return (0);
}
