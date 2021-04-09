/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   keyword_new.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 08:22:08 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/04/09 12:25:49 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"
#include <stdlib.h>

inline int	keyword_new(t_dict *head, char *key, void *content)
{
	int		i;
	t_dict	*tmp;

	tmp = head;
	i = 0;
	while (key[i])
	{
		if (tmp->dict[(unsigned char)key[i]])
		{
			tmp = tmp->dict[(unsigned char)key[i]];
			i++;
		}
		else
			tmp->dict[(unsigned char)key[i]] = calloc(1, sizeof(t_dict));
	}
	if (tmp->content)
		return (0);
	tmp->content = content;
	return (1);
}
