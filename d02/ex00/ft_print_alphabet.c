/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:44:37 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 21:04:56 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char current_letter;

	current_letter = 'a';
	while (current_letter <= 'z')
	{
		ft_putchar(current_letter);
		current_letter++;
	}
	ft_putchar('\n');
}
