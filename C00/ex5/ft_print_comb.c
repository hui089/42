/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihebang <jihebang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:30:31 by jihebang          #+#    #+#             */
/*   Updated: 2022/08/28 01:50:19 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char a, char b, char c)
{
	write(1,&a,1);
	write(1,&b,1);
	write(1,&c,1);

}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	i = 0;
	while(i <= 7)
	{
		j = i+1;
		while( j <= 8 )
		{
			k = j + 1;
			while(k <= 9)
			{
				if(i == 7)
				{
					write(1,"789",3);
					return;
				}
				ft_putchar(i, j, k);
				write(1,", ",2);
			}
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
}
