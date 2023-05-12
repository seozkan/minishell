/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:08:56 by seozkan           #+#    #+#             */
/*   Updated: 2023/05/12 17:28:26 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "global.h"
# include "cmd.h"
# include "token.h"

t_list	*parser(t_list *l_token);
int		parser_cmd_group_merge(t_list **l_cmd);
int		parser_heredoc(t_list *l_token);
int		parser_cmd_pipeline_merge(t_list **l_cmd);
t_list	*parser_scmd_tokens(t_list *l_token);

#endif
