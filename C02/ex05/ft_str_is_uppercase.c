/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:42:46 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/31 18:52:38 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;
i = 0;

if(!str)
return 1;

	while(str[i] != '\0')
	{
		if(!('A'<=str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int main(){
	char str[] = "AAB";
	printf("%d",ft_str_is_uppercase(str));
}
