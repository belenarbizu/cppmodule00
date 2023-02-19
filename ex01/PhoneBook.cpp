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
    std::getline(std::cin, s);
    while (s.empty())
    {
        std::cout << "First name: ";
        std::getline(std::cin, s);
    }
    _contacts[index].set_fname(s);
    std::cout << "Last name: ";
    std::getline(std::cin, s);
    while (s.empty())
    {
        std::cout << "Last name: ";
        std::getline(std::cin, s);
    }
    _contacts[index].set_lname(s);
    std::cout << "Nickname: ";
    std::getline(std::cin, s);
    while (s.empty())
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, s);
    }
    _contacts[index].set_nname(s);
    std::cout << "Phone number: ";
    std::getline(std::cin, s);
    while (s.empty())
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, s);
    }
    _contacts[index].set_phone(s);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, s);
    while (s.empty())
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, s);
    }
    _contacts[index].set_secret(s);
}

void	PhoneBook::search(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << _contacts[index].get_fname();
    std::cout << "|" << std::setw(10) << _contacts[index].get_lname();
    std::cout << "|" << std::setw(10) << _contacts[index].get_nname() << "|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}
