/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vars_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 10:27:53 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/16 16:37:15 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARS_STRUCT_H
# define VARS_STRUCT_H

#include "word_gen.h"

typedef struct word_gen word_gen;

struct word_gen
{
	int		w_size;
	int		w_nb;
	char	*word;
	char	*alphabet;
	char 	*vowels;
	char	*consonants;
	char	**double_c;
};

#endif
