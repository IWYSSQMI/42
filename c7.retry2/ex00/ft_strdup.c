/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:02:21 by pretch            #+#    #+#             */
/*   Updated: 2024/06/06 00:02:24 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*word;
	int		i;

	word = malloc(ft_strlen(src) + 1);
	if (word == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		word[i] = src[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

// int main(void)
// {
//     char source[] = "abutukum";

//     printf("%s", ft_strdup(source));
// }