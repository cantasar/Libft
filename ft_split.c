/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:28:01 by ctasar            #+#    #+#             */
/*   Updated: 2023/07/08 18:43:20 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int pass_sep(char const *s, int i, int c)
{
    while (s[i] && s[i] == c)
        i++;
    return (i);
}
int pass_word(const char *s, int tmp, int c)
{
    while (s[tmp] && s[tmp] != c)
        tmp++;
    return (tmp);
}
static int  count_word(const char *s, char c)
{
    int i;
    int count;
    i = 0;
    count = 0;
    while (s[i])
    {
        i = pass_sep(s, i, c);
        if (s[i] != c && s[i])
        {
            count++;
            i = pass_word(s, i, c);
        }
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    char    **list;
    size_t  i;
    size_t  tmp;
    size_t  h;
    size_t  word_count;
    i = 0;
    h = 0;
    word_count = count_word(s, c);
    list = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
    if (!list)
        return (NULL);
    while (s[i])
    {
        i = pass_sep(s, i, c);
        tmp = i;
        tmp = pass_word(s, tmp, c);
        if (word_count == h)
            break ;
        list[h++] = ft_substr(s, i, tmp - i);
        i = tmp;
    }
    list[h] = NULL;
    return (list);
}



/*
int	main(void)
{
	char **p = ft_split("lorem ipsumdolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse ", ' ');
	int i = 0;

	while (p[i])
	{
		printf("**%s**\n", p[i]);
		i++;
	}
	return 0;
}
*/