/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hotrace.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <lverdoes@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 21:24:31 by lverdoes      #+#    #+#                 */
/*   Updated: 2021/04/09 13:15:58 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# define PAGES 256
# define BUFFER_SIZE 128

typedef struct s_dict
{
	void			*content;
	struct s_dict	*dict[PAGES];
}	t_dict;

void	parse(t_dict *head, char *line);
int		keyword_new(t_dict *head, char *key, void *content);
t_dict	*keyword_find(t_dict *head, char *key);

#endif
