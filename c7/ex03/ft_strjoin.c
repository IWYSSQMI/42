/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:04:03 by pretch            #+#    #+#             */
/*   Updated: 2024/06/06 00:04:04 by pretch           ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		len;

	len = 0;
	i = 0;
	len += (size - 1) * ft_strlen(sep);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			str[k++] = sep[j++];
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char *strs[3] = {"isala", "mala", "kum"};
// 	char *sep = "\t";
// 	char *str;

// 	str = ft_strjoin(3, strs, sep);
// 	printf("%s\n", str);
// }