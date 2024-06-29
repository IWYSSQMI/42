/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:04:44 by pretch            #+#    #+#             */
/*   Updated: 2024/06/06 00:04:45 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_sep(str[i], sep) && str[i])
			i++;
		if (!is_sep(str[i], sep) && str[i])
			count++;
		while (!is_sep(str[i], sep) && str[i])
			i++;
	}
	return (count);
}

char	*malloc_word(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	while (!is_sep(str[i], sep) && str[i])
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (!is_sep(str[i], sep) && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	tab = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	i = 0;
	j = 0;
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (is_sep(str[i], charset) && str[i])
			i++;
		if (!is_sep(str[i], charset) && str[i])
			tab[j++] = malloc_word(str + i, charset);
		while (!is_sep(str[i], charset) && str[i])
			i++;
	}
	tab[j] = 0;
	return (tab);
}

int main(void)
{
    char *str = "isala mala kum";
    char *sep = " ";
    char **tab;
    int i;

    tab = ft_split(str, sep);
    i = 0;
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
}