/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 15:05:37 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 21:13:00 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char current_digit;

	current_digit = '0';
	while (current_digit <= '9')
	{
		ft_putchar(current_digit);
		current_digit++;
	}
	ft_putchar('\n');
}
