/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_gen.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 10:22:12 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/15 10:56:01 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORD_GEN_H
# define WORD_GEN_H
#include <stdlib.h>
#include <unistd.h>
#define TRUE 1
#define FALSE 0

typedef t_bool int;

t_bool	word_gen(word_gen *var);

int		ft_atoi(const char *str);

#endif
