/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hotrace.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 21:24:31 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/04/09 14:39:24 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# define PAGES 256

typedef struct s_dict
{
	void			*content;
	struct s_dict	*dict[PAGES];
}	t_dict;

void	parse(t_dict *head, char *line);
int		keyword_new(t_dict *head, char *key, void *content);
t_dict	*keyword_find(t_dict *head, char *key);

#endif
