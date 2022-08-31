/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:02:34 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/31 17:10:55 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main()
{
	char dest[] = "";
	char src[] = "asdf";

	ft_strncpy(dest,src,3);
	printf("%s",dest);
}
