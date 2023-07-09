/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:44:55 by ctasar            #+#    #+#             */
/*   Updated: 2023/07/08 20:15:15 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*num;
	int		i;

	nb = n;
	i = int_len(nb);
	num = (char *)malloc(sizeof(char) * (i + 1));
	if (!num)
		return (NULL);
	num[i--] = '\0';
	if (nb == 0)
		num[0] = '0';
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		num[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (num);
}

// int main()
// {
// 	printf("%s", ft_itoa(0));

// 	ft_itoa(0);
// 	return 0;
// }
