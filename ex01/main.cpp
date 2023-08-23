/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:03:13 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/23 11:37:09 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Scav");
    ScavTrap scav2;
    scav.attack("target");
    scav.takeDamage(5);
    scav.beRepaired(5);
    scav.guardGate();
    scav2.attack("target2");
    scav2.takeDamage(10);
    scav2.beRepaired(10);
    scav2.guardGate();
    
    return (0);
}