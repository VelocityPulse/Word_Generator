/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_gen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 11:10:37 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/16 12:58:29 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/rand.h"

t_bool	init_alpha(word_gen *var)
{
	int i;

	i = 0;
	if (! (var->alphabet = malloc(27 * sizeof(char))))
		return (FALSE);
	while (i <= 122)
	{
		var->alphabet[i] = 97 + i;
		i++;
	}
	var->alphabet[i] = '\0';
	return (TRUE);
}

t_bool	init_vowels(word_gen *var)
{
	if (! (var->vowels = malloc (7 * sizeof (char))))
		return (FALSE);
	var->vowels[0] = 'a';
	var->vowels[1] = 'e';
	var->vowels[2] = 'i';
	var->vowels[3] = 'o';
	var->vowels[4] = 'u';
	var->vowels[5] = 'y';
	var->vowels[6] = '\0';
	return (TRUE);
}

t_bool	init_consonants(word_gen *var)
{
	if (! (var->consonants = malloc (21 * sizeof (char))))
		return (FALSE);
	var->consonants[0] = 'b';
	var->consonants[1] = 'c';
	var->consonants[2] = 'd';
	var->consonants[3] = 'f';
	var->consonants[4] = 'g';
	var->consonants[5] = 'h';
	var->consonants[6] = 'j';
	var->consonants[7] = 'k';
	var->consonants[8] = 'l';
	var->consonants[9] = 'm';
	var->consonants[10] = 'n';
	var->consonants[11] = 'p';
	var->consonants[12] = 'q';
	var->consonants[13] = 'r';
	var->consonants[14] = 's';
	var->consonants[15] = 't';
	var->consonants[16] = 'v';
	var->consonants[17] = 'w';
	var->consonants[18] = 'x';
	var->consonants[19] = 'z';
	return (TRUE);
}

t_bool	init_double_c(word_gen *var)
{
	if (! (var->double_c = malloc(59 * sizeof (char *))))
		return (FALSE);
	var->double_c[0] = malloc(2 * sizeof(char))
	var->double_c[0] = '';
	var->double_c[1] = malloc(2 * sizeof(char))
	var->double_c[1] = '';
	var->double_c[2] = malloc(2 * sizeof(char))
	var->double_c[2] = '';
	var->double_c[3] = malloc(2 * sizeof(char))
	var->double_c[3] = '';
	var->double_c[4] = malloc(2 * sizeof(char))
	var->double_c[4] = '';
	var->double_c[5] = malloc(2 * sizeof(char))
	var->double_c[5] = '';
	var->double_c[6] = malloc(2 * sizeof(char))
	var->double_c[6] = '';
	var->double_c[7] = malloc(2 * sizeof(char))
	var->double_c[7] = '';
	var->double_c[8] = malloc(2 * sizeof(char))
	var->double_c[8] = '';
	var->double_c[9] = malloc(2 * sizeof(char))
	var->double_c[9] = '';
	var->double_c[10] = malloc(2 * sizeof(char))
	var->double_c[10] = '';
	var->double_c[11] = malloc(2 * sizeof(char))
	var->double_c[11] = '';
	var->double_c[12] = malloc(2 * sizeof(char))
	var->double_c[12] = '';
	var->double_c[13] = malloc(2 * sizeof(char))
	var->double_c[13] = '';
	var->double_c[14] = malloc(2 * sizeof(char))
	var->double_c[14] = '';
	var->double_c[15] = malloc(2 * sizeof(char))
	var->double_c[15] = '';
	var->double_c[16] = malloc(2 * sizeof(char))
	var->double_c[16] = '';
	var->double_c[17] = malloc(2 * sizeof(char))
	var->double_c[17] = '';
	var->double_c[18] = malloc(2 * sizeof(char))
	var->double_c[18] = '';
	var->double_c[19] = malloc(2 * sizeof(char))
	var->double_c[19] = '';
	var->double_c[20] = malloc(2 * sizeof(char))
	var->double_c[20] = '';
	var->double_c[21] = malloc(2 * sizeof(char))
	var->double_c[21] = '';
	var->double_c[22] = malloc(2 * sizeof(char))
	var->double_c[22] = '';
	var->double_c[23] = malloc(2 * sizeof(char))
	var->double_c[23] = '';
	var->double_c[24] = malloc(2 * sizeof(char))
	var->double_c[24] = '';
	var->double_c[25] = malloc(2 * sizeof(char))
	var->double_c[25] = '';
	var->double_c[26] = malloc(2 * sizeof(char))
	var->double_c[26] = '';
	var->double_c[27] = malloc(2 * sizeof(char))
	var->double_c[27] = '';
	var->double_c[28] = malloc(2 * sizeof(char))
	var->double_c[28] = '';
	var->double_c[29] = malloc(2 * sizeof(char))
	var->double_c[29] = '';
	var->double_c[30] = malloc(2 * sizeof(char))
	var->double_c[30] = '';
	var->double_c[31] = malloc(2 * sizeof(char))
	var->double_c[31] = '';
	var->double_c[32] = malloc(2 * sizeof(char))
	var->double_c[32] = '';
	var->double_c[33] = malloc(2 * sizeof(char))
	var->double_c[33] = '';
	var->double_c[34] = malloc(2 * sizeof(char))
	var->double_c[34] = '';
	var->double_c[35] = malloc(2 * sizeof(char))
	var->double_c[35] = '';
	var->double_c[36] = malloc(2 * sizeof(char))
	var->double_c[36] = '';
	var->double_c[37] = malloc(2 * sizeof(char))
	var->double_c[37] = '';
	var->double_c[38] = malloc(2 * sizeof(char))
	var->double_c[38] = '';
	var->double_c[39] = malloc(2 * sizeof(char))
	var->double_c[39] = '';
	var->double_c[40] = malloc(2 * sizeof(char))
	var->double_c[40] = '';
	var->double_c[41] = malloc(2 * sizeof(char))
	var->double_c[41] = '';
	var->double_c[42] = malloc(2 * sizeof(char))
	var->double_c[42] = '';
	var->double_c[43] = malloc(2 * sizeof(char))
	var->double_c[43] = '';
	var->double_c[44] = malloc(2 * sizeof(char))
	var->double_c[44] = '';
	var->double_c[45] = malloc(2 * sizeof(char))
	var->double_c[45] = '';
	var->double_c[46] = malloc(2 * sizeof(char))
	var->double_c[46] = '';
	var->double_c[47] = malloc(2 * sizeof(char))
	var->double_c[48] = '';
	var->double_c[49] = malloc(2 * sizeof(char))
	var->double_c[50] = '';
	var->double_c[51] = malloc(2 * sizeof(char))
	var->double_c[51] = '';
	var->double_c[52] = malloc(2 * sizeof(char))
	var->double_c[52] = '';
	var->double_c[53] = malloc(2 * sizeof(char))
	var->double_c[53] = '';
	var->double_c[54] = malloc(2 * sizeof(char))
	var->double_c[54] = '';
	var->double_c[55] = malloc(2 * sizeof(char))
	var->double_c[55] = '';
	var->double_c[56] = malloc(2 * sizeof(char))
	var->double_c[56] = '';
	var->double_c[57] = malloc(2 * sizeof(char))
	var->double_c[57] = '';
	var->double_c[58] = malloc(2 * sizeof(char))
	var->double_c[58] = '';
	var->double_c[59] = malloc(2 * sizeof(char))
	var->double_c[59] = '';
}

int		word_gen(word_gen *var)
{
	if (! (init_alpha(&var)))
		return (-2);
	if (! (init_vowels(&var)))
		return (-3);
	if (! (init_consonants(&var)))
		return (-4);
	if (! (init_double_c(&var)))
		return (-4);
}

