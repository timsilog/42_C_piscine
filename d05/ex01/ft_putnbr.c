/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 14:17:01 by tjose             #+#    #+#             */
/*   Updated: 2016/11/06 18:14:15 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);


void    recursiveputnbr(long nb)
{
    int remainder;
    
    if (nb == 0)
    	return ;
    ft_putnbr(nb/10);
    remainder = nb % 10;
    ft_putchar (remainder - '0');
}


void	ft_putnbr(int nb)
{
    long holder = nb;
    if (holder < 0)
    {
        ft_putchar('-');
        holder = -holder;
    }
    recursiveputnbr(holder);
}
