/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <jihebang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 02:32:43 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/27 02:54:47 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void put_char(char c){
	write(1,&c,1);
}

void	ft_putnbr(int nb){
	if(nb < 0)
	{
		put_char('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	
	put_char(nb % 10)
	{

	}



};
