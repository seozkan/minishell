/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_unset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:29:45 by seozkan           #+#    #+#             */
/*   Updated: 2023/05/12 17:29:47 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"
#include "env.h"

int	builtin_unset(int argc __attribute((unused)), char **argv)
{
	int	status;
	int	i;
	int	j;

	status = 0;
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] && env_is_var_char(argv[i][j]))
			j++;
		if (argv[i][j] != '\0' || argv[i][0] == '\0')
		{
			print_error(SHELL_NAME, "unset", argv[i], "not a valid identifier");
			status = EXIT_FAILURE;
		}
		else
			env_unset_var(argv[i]);
		i++;
	}
	return (status);
}
