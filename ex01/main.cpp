/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:33:19 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/03 02:24:15 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N1 = 7;
	int N2 = 3;
	Zombie* horde1 = zombieHorde(N1, "Jarkko");
	Zombie* horde2 = zombieHorde(N2, "Matti");

	for (int i = 0; i < N1; ++i)
		horde1[i].announce();
	delete[] horde1;
	for (int i = 0; i < N2; ++i)
		horde2[i].announce();
	delete[] horde2;
	return 0;
}
