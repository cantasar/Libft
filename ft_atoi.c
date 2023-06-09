/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:56:39 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/08 18:59:52 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char chr)
{
	if ((chr >= 9 && chr <= 13) || chr == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	ret_val;
	int				index;
	int				polarity;

	polarity = 1;
	index = 0;
	if (*str == '\0')
		return (0);
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			polarity *= -1;
		index++;
	}
	ret_val = 0;
	while (str[index] >= '0' && str[index] <= '9')
		ret_val = (ret_val * 10) + (str[index++] - '0');
	if (ret_val > LONG_MAX && polarity == -1)
		return (0);
	if (ret_val > LONG_MAX && polarity == 1)
		return (-1);
	return (ret_val * polarity);
}
