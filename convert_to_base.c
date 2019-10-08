/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 05:04:45 by tblancha          #+#    #+#             */
/*   Updated: 2019/09/30 05:07:15 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "state_machina.h"

char	*convert_to_base_ulong(unsigned long number_to_convert,
		const unsigned int base)
{
	static	char	elements_of_base[] = "0123456789ABCDEF";
	static	char	buff_containing_data[125];
	char			*converted_num;

	converted_num = &buff_containing_data[124];
	*converted_num = '\0';
	while (number_to_convert != 0)
	{
		*--converted_num = elements_of_base[number_to_convert % base];
		number_to_convert = number_to_convert / base;
	}
	if (*converted_num == '\0')
		*--converted_num = '0';
	return (converted_num);
}

char	*convert_to_base_min_ulong(unsigned long number_to_convert,
		const unsigned int base)
{
	static	char	elements_of_base[] = "0123456789abcdef";
	static	char	buff_containing_data[125];
	char			*converted_num;

	converted_num = &buff_containing_data[124];
	*converted_num = '\0';
	while (number_to_convert != 0)
	{
		*--converted_num = elements_of_base[number_to_convert % base];
		number_to_convert = number_to_convert / base;
	}
	if (*converted_num == '\0')
		*--converted_num = '0';
	return (converted_num);
}

char	*convert_to_base_long(long number_to_convert,
		const unsigned int base)
{
	static	char	elements_of_base[] = "0123456789ABCDEF";
	static	char	buff_containing_data[125];
	char			*converted_num;
	int				signe;

	converted_num = &buff_containing_data[124];
	*converted_num = '\0';
	signe = (number_to_convert < 0) ? 1 : 0;
	while (number_to_convert != 0)
	{
		*--converted_num = elements_of_base[ABS(number_to_convert % base)];
		number_to_convert = number_to_convert / base;
	}
	if (signe)
		*--converted_num = '-';
	if (*converted_num == '\0')
		*--converted_num = '0';
	return (converted_num);
}

char	*convert_to_base_min_long(long number_to_convert,
		const unsigned int base)
{
	static	char	elements_of_base[] = "0123456789abcdef";
	static	char	buff_containing_data[125];
	char			*converted_num;
	int				signe;

	converted_num = &buff_containing_data[124];
	*converted_num = '\0';
	signe = (number_to_convert < 0) ? 1 : 0;
	while (number_to_convert != 0)
	{
		*--converted_num = elements_of_base[ABS(number_to_convert % base)];
		number_to_convert = number_to_convert / base;
	}
	if (signe)
		*--converted_num = '-';
	if (*converted_num == '\0')
		*--converted_num = '0';
	return (converted_num);
}
