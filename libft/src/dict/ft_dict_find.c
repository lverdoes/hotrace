/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dict_find.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 08:13:32 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/04/08 21:50:57 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

t_dict	*ft_dict_find(t_dict *head, char *key)
{
	t_dict	*tmp;
	int		i;
	int		j;

	if (!head || !key)
		return (NULL);
	i = 0;
	tmp = head;
	while (key[i])
	{
		j = tmp->num[(int)key[i]];
		if (j < 0)
			return (NULL);
		tmp = tmp->d[j];
		i++;
	}
	return (tmp);
}
