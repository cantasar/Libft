/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:36:36 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/25 17:48:09 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_s1(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (strlen(s1) == 0 || set == 0)
		return (NULL);
	start = 0;
	while (s1[start] && check_s1(s1[start], set))
		start++;
	end = strlen(s1) - 1;
	while (s1[end] && check_s1(s1[end], set))
		end--;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

int main()
{
	char *a = "abcdef";
    ft_strtrim("adebczzzzmaaaabcde", a);
    return 0;
}
