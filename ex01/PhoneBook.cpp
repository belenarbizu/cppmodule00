/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:11:03 by barbizu-          #+#    #+#             */
/*   Updated: 2023/01/30 13:11:05 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::add(void)
{
	std::string s;

    std::cout << "First name: ";
    std::cin >> s;
    _contacts[index].set_fname(s);
    std::cout << "Last name: ";
    std::cin >> s;
    _contacts[index].set_lname(s);
    std::cout << "Nickname: ";
    std::cin >> s;
    _contacts[index].set_nname(s);
    std::cout << "Phone number: ";
    std::cin >> s;
    _contacts[index].set_phone(s);
    std::cout << "Darkest secret: ";
    std::cin >> s;
    _contacts[index].set_secret(s);
}

void	PhoneBook::search(void)
{
	std::cout << "1. First Name: ";
	std::cout << _contacts[index].get_fname() << std::endl;
    std::cout << "1. Last Name: ";
	std::cout << _contacts[index].get_lname() << std::endl;
    std::cout << "1. Nickname: ";
	std::cout << _contacts[index].get_nname() << std::endl;
    std::cout << "1. Phone number: ";
	std::cout << _contacts[index].get_phone() << std::endl;
    std::cout << "1. Darkest secret: ";
	std::cout << _contacts[index].get_secret() << std::endl;
}
