/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 10:15:56 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/15 10:57:54 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <word_gen.h>

int		main(int argc, char **argv)
{
	word_gen var;

	var.w_nb = ft_atoi(argv[1]);
	var.w_size = ft_atoi(argv[2]);
	if (argc != 3)
		return (-1);
	if (! (world_gen(&var)))
			return (0);
	else
			return (-1);
}
