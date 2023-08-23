/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:03:13 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/23 11:53:14 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    ClapTrap clap2(clap);
    ClapTrap clap3 = clap2;
    ClapTrap clap4;

    std::cout << "-----------------" << std::endl;
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(5);

    std::cout << "-----------------" << std::endl;

    std::cout << "-----------------" << std::endl;
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.attack("Enemy2");
    clap4.takeDamage(5);
    clap4.beRepaired(5);

    std::cout << "-----------------" << std::endl;
    return (0);
}