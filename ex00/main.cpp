/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:55:32 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/03 00:29:19 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("StackZombie");
	Zombie	*heap_zombie;
	heap_zombie = newZombie("HeapZombiee");

	heap_zombie->announce();
	delete (heap_zombie);
	return (0);
}
