/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:03:13 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/23 12:11:52 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    FragTrap frag("Frag");
    FragTrap frag2;
    std::cout << "-----------" << std::endl;
    frag.attack("target");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    std::cout << "-----------" << std::endl;
    frag2.attack("target2");
    frag2.takeDamage(20);
    frag2.beRepaired(10);
    frag2.highFivesGuys();

    return (0);
}