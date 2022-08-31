/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:42:46 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/31 18:51:22 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;
i = 0;

if(!str)
return 1;

	while(str[i] != '\0')
	{
		if(!('a'<=str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return 1;
}

int main(){
	char str[] = "BB";
	printf("%d",ft_str_is_lowercase(str));
}
