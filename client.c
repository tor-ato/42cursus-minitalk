/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:18:16 by tkitahar          #+#    #+#             */
/*   Updated: 2024/10/10 17:43:17 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <complex.h>
#include <signal.h>
#include <unistd.h>

#define PID_ERR_NUM		-1
#define PID_ERR_MSG		"Error: invaled PID"
#define CHAR_BIT_LEN	8

#define USAGE_MSG	"Usage: client [server PID] [message]"
#define ERR_SEND	"Error: faild to send signal"

void	send_message(pid_t pid, const char *message)
{
	unsigned int	bit;
	char			c;
	int				res;

	while(*message)
	{
		c = *message++;
		bit = CHAR_BIT_LEN;
		while (bit--)
		{
			if (c & (1 << bit))
				res = kill(pid, SIGUSR2);
			else
				res = kill(pid, SIGUSR1);
			if (res == -1)
			{
				ft_putendl_fd(ERR_SEND, STDIN_FILENO);
				exit(EXIT_FAILURE);
			}
			usleep(100);
		}
	}
}

pid_t	parse_pid(const char *pid_str)
{
	pid_t	pid;

	if(*pid_str == 0 || !ft_strall(pid_str, ft_isdigit))
		return (PID_ERR_NUM);
	pid = ft_atoi(pid_str);
	if (pid <= 0)
		return (PID_ERR_NUM);
	return (pid);
}

int main(int argc, char *argv[])
{
	pid_t	server_pid;

	if (argc !=3)
	{
		ft_putendl_fd(USAGE_MSG, STDIN_FILENO);
		return (EXIT_FAILURE);
	}
	server_pid = parse_pid(argv[1]);
	if (server_pid <= PID_ERR_NUM)
	{
		ft_putendl_fd(PID_ERR_MSG, STDERR_FILENO);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
