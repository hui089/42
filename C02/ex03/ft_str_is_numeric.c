/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:34:01 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/31 18:42:13 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	i=0;

	if (!str)
		return 1;

	while(str[i] != '\0'){
		if(('0' <= str[i] && str[i] <= '9'))
			return 1;
		i++;
	}
	return 0;
}

int main()
{
	char str[] = "";
	printf("%d",ft_str_is_numeric(str));
}
