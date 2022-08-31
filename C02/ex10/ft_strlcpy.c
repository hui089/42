/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:38:40 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/31 23:37:05 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char* str) //소스길이 리턴
{	
	int i;
	i = 0;
	while(str != '\o')
	{
		count++;
	}
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	
	i = 0;
	
	if(ft_strlen(str) < size) 
		//다 복사
		//소스길이 끝날 떄까지만, 쓰레기값 주의!
	if(ft_strlen(str) > size)
		//size-1만큼 복사 후 널 붙이기
	if ( size == 0 )
		//소스길이 리턴
}

