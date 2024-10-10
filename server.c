/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:23:33 by tkitahar          #+#    #+#             */
/*   Updated: 2024/10/10 16:31:26 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/includes/libft.h"

#define CHAR_BIT_LEN	8
#define PID_FORMAT 		"server PID: %d\n"
#define SEND_ERR		"Error: failed to send signal"
void	handle_request(int signum, siginfo_t *info, void *context)
{
	static char		c;
	static int		bits_recived;

	(void)info;
	(void)context;
	c <<= 1;
	if (signum == SIGUSR2)
		c |= 1;
	bits_recived++;
	if (bits_recived == CHAR_BIT_LEN)
	{
		write(STDOUT_FILENO, &c, 1);
		bits_recived = 0;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	act;

	sigemptyset(&act.sa_mask);
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = handle_request;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	ft_dprintf(STDOUT_FILENO, PID_FORMAT, getpid());
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
