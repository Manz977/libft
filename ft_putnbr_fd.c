/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamonzer <mamonzer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:54:09 by mamonzer          #+#    #+#             */
/*   Updated: 2025/10/23 14:09:47 by mamonzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  // For open()
#include <limits.h> // For INT_MIN, INT_MAX
#include <stdio.h>  // For printf()
#include <unistd.h> // For write(), close()

void	ft_putnbr_fd(int n, int fd)
{
	char	d;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
		return ;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		d = n + '0';
		write(fd, &d, 1);
	}
}
// int	main(void)
//{
//	int		fd;
//	int		bad_fd;
//	ssize_t	result;

//	printf("=== TEST 1: Basic numbers to STDOUT ===\n");
//	ft_putnbr_fd(0, 1);
//	write(1, "\n", 1);
//	ft_putnbr_fd(42, 1);
//	write(1, "\n", 1);
//	ft_putnbr_fd(-42, 1);
//	write(1, "\n", 1);
//	printf("\n=== TEST 2: Extreme values ===\n");
//	ft_putnbr_fd(INT_MAX, 1);
//	write(1, "\n", 1);
//	ft_putnbr_fd(INT_MIN, 1);
//	write(1, "\n", 1);
//	printf("\n=== TEST 3: Write to STDERR ===\n");
//	write(2, "Error message: ", 15);
//	ft_putnbr_fd(-9999, 2);
//	write(2, "\n", 1);
//	printf("\n=== TEST 4: Write to file ===\n");
//	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//	if (fd == -1)
//	{
//		perror("open failed");
//		return (1);
//	}
//	ft_putnbr_fd(123456789, fd);
//	write(fd, "\n", 1);
//	ft_putnbr_fd(-987654321, fd);
//	write(fd, "\n", 1);
//	close(fd);
//	printf("Check 'test_output.txt' for output.\n");
//	printf("\n=== TEST 5: Invalid FD ===\n");
//	bad_fd = 9999;
//	result = write(bad_fd, "x", 1);
//	if (result == -1)
//		perror("Invalid write test");
//	ft_putnbr_fd(123, bad_fd); // Should silently fail
//	printf("\n=== TEST 6: Stress recursion ===\n");
//	ft_putnbr_fd(1000000000, 1);
//	write(1, "\n", 1);
//	printf("\nAll tests done.\n");
//	return (0);
//}
