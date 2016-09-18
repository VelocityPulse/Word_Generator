/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_gen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 11:10:37 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/18 13:53:20 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/word_gen.h"

t_bool	init_alpha(t_word_gen *var)
{
   if (!(var->alphabet = ft_strdup("abcdefghijklmnopqrstuvwxyz")))
       return (FALSE);
   else
       return (TRUE);
}

t_bool    init_vowels(t_word_gen *var)
{
   if (!(var->vowels = ft_strdup("aeiouy")))
       return (FALSE);
   else
       return (TRUE);
}

t_bool    init_consonants(t_word_gen *var)
{
   if (!(var->consonants = ft_strdup("bcdfghjklmnpqrstvwxz")))
       return (FALSE);
   else
       return (TRUE);
}

t_bool	init_double_c(t_word_gen *var)
{
	if (! (var->double_c = malloc(61 * sizeof (char *))))
		return (FALSE);
	var->double_c[0] = ft_strdup("");
	var->double_c[1] = ft_strdup("");
	var->double_c[2] = ft_strdup("");
	var->double_c[3] = ft_strdup("");
	var->double_c[4] = ft_strdup("");
	var->double_c[5] = ft_strdup("");
	var->double_c[6] = ft_strdup("");
	var->double_c[7] = ft_strdup("");
	var->double_c[8] = ft_strdup("");
	var->double_c[9] = ft_strdup("");
	var->double_c[10] = ft_strdup("");
	var->double_c[11] = ft_strdup("");
	var->double_c[12] = ft_strdup("");
	var->double_c[13] = ft_strdup("");
	var->double_c[14] = ft_strdup("");
	var->double_c[15] = ft_strdup("");
	var->double_c[16] = ft_strdup("");
	var->double_c[17] = ft_strdup("");
	var->double_c[18] = ft_strdup("");
	var->double_c[19] = ft_strdup("");
	var->double_c[20] = ft_strdup("");
	var->double_c[21] = ft_strdup("");
	var->double_c[22] = ft_strdup("");
	var->double_c[23] = ft_strdup("");
	var->double_c[24] = ft_strdup("");
	var->double_c[25] = ft_strdup("");
	var->double_c[26] = ft_strdup("");
	var->double_c[27] = ft_strdup("");
	var->double_c[28] = ft_strdup("");
	var->double_c[29] = ft_strdup("");
	var->double_c[30] = ft_strdup("");
	var->double_c[31] = ft_strdup("");
	var->double_c[32] = ft_strdup("");
	var->double_c[33] = ft_strdup("");
	var->double_c[34] = ft_strdup("");
	var->double_c[35] = ft_strdup("");
	var->double_c[36] = ft_strdup("");
	var->double_c[37] = ft_strdup("");
	var->double_c[38] = ft_strdup("");
	var->double_c[39] = ft_strdup("");
	var->double_c[40] = ft_strdup("");
	var->double_c[41] = ft_strdup("");
	var->double_c[42] = ft_strdup("");
	var->double_c[43] = ft_strdup("");
	var->double_c[44] = ft_strdup("");
	var->double_c[45] = ft_strdup("");
	var->double_c[46] = ft_strdup("");
	var->double_c[47] = ft_strdup("");
	var->double_c[48] = ft_strdup("");
	var->double_c[49] = ft_strdup("");
	var->double_c[50] = ft_strdup("");
	var->double_c[51] = ft_strdup("");
	var->double_c[52] = ft_strdup("");
	var->double_c[53] = ft_strdup("");
	var->double_c[54] = ft_strdup("");
	var->double_c[55] = ft_strdup("");
	var->double_c[56] = ft_strdup("");
	var->double_c[57] = ft_strdup("");
	var->double_c[58] = ft_strdup("");
	var->double_c[59] = ft_strdup("");
	return (TRUE);
}

t_bool	malloc_word(t_word_gen *var)
{
	if (! (var->word = malloc(var->w_size * sizeof(char))))
		return (FALSE);
	else
		return (TRUE);
}

void	fill_rand(t_word_gen *var)
{
	int i;

	i = 0;
	while (var->w_size > 0)
	{
		var->word[i] = var->alphabet[ft_rand(0, 25)];
		i++;
		var->w_size--;
	}
}

void	print_word(t_word_gen *var)
{
	ft_putstr(var->word);
}

int		generator(t_word_gen *var)
{
	if (! (init_alpha(var)))
	{
		return (-2);
	}
	else
	if (! (init_vowels(var)))
	{
		return (-3);
	}
	else
	if (! (init_consonants(var)))
	{
		return (-4);
	}
	else
	if (! (init_double_c(var)))
	{
		return (-5);
	}
	else
	if (! (malloc_word(var)))
		return (-6);
	//We then generate the word
	fill_rand(var);
	print_word(var);
	return (0);
}

