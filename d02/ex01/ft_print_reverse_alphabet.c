/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 16:14:37 by tjose             #+#    #+#             */
/*   Updated: 2016/10/28 15:51:24 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char current_letter;

	current_letter = 'z';
	while (current_letter >= 'a')
	{
		ft_putchar(current_letter--);
	}
	ft_putchar('\n');
}
