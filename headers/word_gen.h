/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_gen.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 10:22:12 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/18 13:52:14 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORD_GEN_H
# define WORD_GEN_H

# include <stdlib.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 1

typedef struct	word_gen
{
	int		w_size;
	int		w_nb;
	char	*word;
	char	*alphabet;
	char	*vowels;
	char	*consonants;
	char	**double_c;
}				t_word_gen;

typedef int		t_bool;

int		ft_putchar(char c);

void	ft_putstr(char *str);

int		generator(t_word_gen *var);

int		ft_atoi(const char *str);

int		ft_rand(int min, int max);

void	print_error(int error_number);

char*	ft_strdup(const char *s);

#endif
