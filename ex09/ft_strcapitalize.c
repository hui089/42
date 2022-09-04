/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:29:05 by jihebang          #+#    #+#             */
/*   Updated: 2022/09/04 18:08:02 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
//32 <= <=47 >> 다음 바꾼다.
	if('a' <= str[0] && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while(str[i] != '\0')
	{
		if('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
}

int main()
{
	char* str[] = "salut, comment tu vas ? 42mots quarante-deux; cuante+et+u";
	printf("%s",ft_strcapitalize(str);
}
