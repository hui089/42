/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:16:32 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/31 20:26:38 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str){
	int i;
	i = 0;
	while(str[i] != '\0'){
		if('a' <= str[i] && str[i]<'z'){
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int main(){
	char str[] = "aBc";
	printf("%s",ft_strupcase(str));

}
