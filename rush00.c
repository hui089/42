/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:56:43 by sanghyun          #+#    #+#             */
/*   Updated: 2022/08/28 18:33:56 by jihebang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_pos;
	int	y_pos;

	y_pos = 1;
	while (y_pos <= y && x > 0)
	{
		x_pos = 1;
		while (x_pos <= x)
		{
			if (x / x_pos + x_pos == x + 1 && y / y_pos + y_pos == y + 1)
				ft_putchar('o');
			else if (x_pos == 1 || x_pos == x)
				ft_putchar('|');
			else if (y_pos == 1 || y_pos == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			x_pos++;
		}
		ft_putchar('\n');
		y_pos++;
	}
}
