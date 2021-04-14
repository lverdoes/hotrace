/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 16:07:51 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/04/14 17:07:23 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	t_dict	*head;
	size_t	size;
	char	*line;
	int		ret;

	head = calloc(1, sizeof(t_dict));
	size = 0;
	line = NULL;
	while (1)
	{
		ret = getline(&line, &size, stdin);
		if (ret <= 0)
			return (0);
		line[ret - 1] = '\0';
		parse(head, line);
	}
	return (0);
}
