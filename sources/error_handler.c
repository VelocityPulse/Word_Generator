/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 13:34:06 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/16 16:24:42 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/word_gen.h"

void	print_error(int error_number)
{
	if (error_number == 0)
	{
		ft_putstr("Application exited sucessfully w/o major errors");
	}
	if (error_number == -1)
	{
		ft_putstr("Application exited with error number -1, Unknown error.\n");
		ft_putstr("Please contact the author for more information.\n");
		return ;
	}
	if (error_number == -2)
	{
		ft_putstr("Application exited with error number -2.\n");
		ft_putstr("Application failed to initiate the alphabet.\n");
		ft_putstr("Please contact the author to report the bug.\n");
		return ;
	}
	if (error_number == -3)
	{
		ft_putstr("Application exited with error number -3.\n");
		ft_putstr("Application failed to initiate the vowels.\n");
		ft_putstr("Please contact the author to report the bug.\n");
		return ;
	}
		if (error_number == -4)
	{
		ft_putstr("Application exited with error number -4.\n");
		ft_putstr("Application failed to initiate the consonants.\n");
		ft_putstr("Please contact the author to report the bug.\n");
		return ;
	}
		if (error_number == -5)
	{
		ft_putstr("Application exited with error number -5.\n");
		ft_putstr("Application failed to initiate the double consonants.\n");
		ft_putstr("Please contact the author to report the bug.\n");
		return ;
	}
}
