/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:08:31 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/31 20:16:10 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;
	i = 0;

	if(!str)
		return 1;

	while(str[i] != '\0')
	{
		if(!(33 <= str[i] && str[i]<=127))
			return (0);
		else
			return (1);

	}
}

int main(){

}
