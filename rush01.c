/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:42:53 by sanghyun          #+#    #+#             */
/*   Updated: 2022/08/28 18:34:13 by jihebang         ###   ########.fr       */
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
			{
				if ((x_pos == 1 && y_pos != 1) || (x_pos != 1 && y_pos == 1))
					ft_putchar('\\');
				else
					ft_putchar('/');
			}
			else if (x / x_pos + x_pos == x + 1 || y / y_pos + y_pos == y + 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			x_pos++;
		}
		ft_putchar('\n');
		y_pos++;
	}
}
