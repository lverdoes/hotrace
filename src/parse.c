/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 21:27:04 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/04/14 17:05:01 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

inline void	parse(t_dict *head, char *line)
{
	t_dict	*d;
	char	*ptr;
	char	*content;

	if (*line == '!')
	{
		d = keyword_find(head, line + 1);
		if (d)
		{
			free(d->content);
			d->content = NULL;
		}
	}
	else
	{
		ptr = strchr(line, '=');
		if (ptr)
		{
			*ptr = '\0';
			content = strdup(ptr + 1);
			if (!keyword_new(head, line, content))
				free(content);
		}
		else
		{
			d = keyword_find(head, line);
			if (d && d->content)
				printf("%s\n", d->content);
			else
				printf("%s: Not found\n", line);
		}
	}
}
