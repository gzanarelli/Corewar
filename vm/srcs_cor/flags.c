/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   flags.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gzanarel <gzanarel@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/17 16:09:12 by gzanarel     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/28 15:51:03 by gzanarel    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/corewar.h"

void	ft_flag_dump(t_cor *c)
{
	print_map(c, 64);
	dump_logs(&(c->vm->logs));
	ft_exit(&(c->vm->logs), 10, NULL, c);
}
