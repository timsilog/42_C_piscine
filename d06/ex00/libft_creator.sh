find . -name "ft_*.c" -exec gcc -Wall -Wextra -Werror -c {} \;
find . -name "ft_*.o" -exec ar rc libft.a {} \;
