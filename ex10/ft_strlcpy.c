/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:38:40 by jihebang          #+#    #+#             */
/*   Updated: 2022/09/04 18:14:41 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char* str) //소스길이 리턴
{	
	int i;
	i = 0;
	int count;
	count=0;
	while(str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	
	i = 0;
	if(ft_strlen(src) < size) 
		//다 복사
		//소스길이 끝날 떄까지만, 쓰레기값 주의!
	{	
		int i = 0;
		while(src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		return(ft_strlen(dest));
	}
	if(ft_strlen(src) > size)
	{
		//size-1만큼 복사 후 널 붙이기
		int i = 0;
		while(i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[size] = '\n';
	}
	if ( size == 0 )
	{
		//소스길이 리턴
		return (ft_strlen(src));
	}

	return(ft_strlen(src));
}

int main()
{
	char dest[] = "asdf";
	char src[] = "rr";

	ft_strlcpy(dest,src,1);

}
