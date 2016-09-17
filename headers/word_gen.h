/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_gen.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 10:22:12 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/17 11:40:15 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORD_GEN_H
# define WORD_GEN_H
#include <stdlib.h>
#include <unistd.h>
#include "vars_struct.h"
#define TRUE 1
#define FALSE 1
typedef int		t_bool;

int		ft_putchar(char c);

void	ft_putstr(char *str);

int		generator(word_gen *var);

int		ft_atoi(const char *str);

int		ft_rand(int min, int max);

void	print_error(int error_number);

char*	ft_strdup(const char *s);

#endif
