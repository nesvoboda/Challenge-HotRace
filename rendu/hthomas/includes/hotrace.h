/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:26:40 by hthomas           #+#    #+#             */
/*   Updated: 2021/04/06 11:21:53 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# include "../libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define MAX_CHAR	126
# define MIN_CHAR	32

# define SHORT		1
# define LONG		2

typedef struct	s_data
{
	char	*key;
	char	*value;
	size_t	length_key;
}			t_data;

typedef struct	s_dict
{
	t_dlist		*keys;
	t_dlist		*values;
	size_t		size;
}				t_dict;


typedef struct			s_chain_tab
{
	size_t				letters[MAX_CHAR - MIN_CHAR + 1];
	struct s_chain_tab	*nexts[MAX_CHAR - MIN_CHAR + 1];
	char				*value;
}						t_chain_tab;

/*
** print
*/
void			print_clean_dlist(t_dlist *output);

/*
** utils
*/
int	in_charset(char const c, char const *charset, size_t *pos);


#endif
