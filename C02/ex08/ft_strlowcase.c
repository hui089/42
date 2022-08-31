/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:16:32 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/31 20:28:31 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str){
	int i;
	i = 0;
	while(str[i] != '\0'){
		if('A' <= str[i] && str[i]<'Z'){
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int main(){
	char str[] = "aBc";
	printf("%s",ft_strlowcase(str));

}
