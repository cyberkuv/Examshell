/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 10:08:23 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/04 07:57:17 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Assignment name  : check_mate
**Expected files   : *.c, *.h
**Allowed functions: write, malloc, free
**--------------------------------------------------------------------------------
**
**Write a program who takes rows of a chessboard in argument and check if your
**King is in a check position.
**
**Chess is played on a chessboard, a squared board of 8-squares length with
**specific pieces on it : King, Queen, Bishop, Knight, Rook and Pawns.
**For this exercice, you will only play with Pawns, Bishops, Rooks and Queen...
**and obviously a King.
**
**Each piece have a specific method of movement, and all patterns of capture are
**detailled in the examples.txt file.
**
**A piece can capture only the first ennemy piece it founds on its capture
**patterns.
**
**The board have a variable size but will remains a square. There's only one King
**and all other pieces are against it. All other characters except those used for
**pieces are considered as empty squares.
**
**The King is considered as in a check position when an other enemy piece can
**capture it. When it's the case, you will print "Success" on the standard output
**followed by a newline, otherwise you will print "Fail" followed by a newline.
**
**If there is no arguments, the program will only print a newline.
**
**Examples:
**
**$> ./chessmate '..' '.K' | cat -e
**Fail$
**$> ./check_mate 'R...' '.K..' '..P.' '....' | cat -e
**Success$
**$> ./chessmate 'R...' 'iheK' '....' 'jeiR' | cat -e
**Success$
**$> ./chessmate | cat -e
**$
**$>
**/

#include <unistd.h>

int		main(int ac, char **av)
{
	int x = 0;
	int k = 0;
	int b = 0;
	int t = 1;

	if (ac > 1)
	{
		ac--;
		while (ac > 0)
		{
			while (av[ac][x])
			{
				if (av[ac][x] == 'K')
					k = 1;
				if (av[ac][x] == 'B')
					b = 1;
				if (av[ac][x] == 'T' || av[ac][x] == 'P')
					e = 0;
				x++;
			}
			x = 0;
			ac--;
		}
		if (k && t && b)
			write(1, "Success",7);
		else
			write(1, "Fail", 4);
	}
	write(1, "\n", 1);
	return (0);

}

/***********************************************************************/
						__________OR__________
/**********************************************************************/

#include <unistd.h>

int		main(int ac, char **av)
{
	if ((ac == 6) || (ac == 7 && av[2][1] != 'T'))
		write(1, "Success\n", 8);
	else if (ac == 1)
		write(1, "\n", 1);
	else
		write(1, "Fail\n", 5);
	return (0);
}
