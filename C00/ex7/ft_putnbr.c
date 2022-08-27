/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <jihebang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 02:32:43 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/28 02:49:08 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	put_char(char c){
	write(1,&c,1);
}

void print_minus_max()
{
	write(1,"-2147483648",11);
	return;
}

void	ft_putnbr(int nb){
	if(nb == -2147483648){
		print_minus_max();
	}
	if((nb / 10) == 0 ){
		write(1,nb%10 + '0',1);	//	printf("%d",nb % 10);
		return;
	}

	if(nb < 0)
	{
		put_char('-');
		nb = -nb;
	}
	
	ft_putnbr(nb / 10);
	write(1,nb%10 + '0', 1); //	printf("%d",nb%10);
};

int main()
{
	ft_putnbr(-2147483648);
}
