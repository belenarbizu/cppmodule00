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
    index++;
}

int PhoneBook::is_wrong(int c)
{
    for (int i = 0; i < index; i++)
    {
        if (c == i)
            return (1);
    }
    return (0);
}

void	PhoneBook::search(void)
{
    std::string c;

    std::cout << "|------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name| Nickname|" << std::endl;
    for (int i = 0; i < index; i++)
    {
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << _contacts[i].get_fname();
        std::cout << "|" << std::setw(10) << _contacts[i].get_lname();
        std::cout << "|" << std::setw(9) << _contacts[i].get_nname() << "|" << std::endl;
    }
    std::cout << "|------------------------------------------|" << std::endl;
    std::cout << "Enter index to display information: ";
    std::getline(std::cin, c);
    while (c.empty() || !is_wrong(std::stoi(c)))
    {
        std::cout << "Enter index to display information: ";
        std::getline(std::cin, c);
    }
    std::cout << "First Name: " << _contacts[std::stoi(c)].get_fname() << std::endl;
    std::cout << "Last Name: " << _contacts[std::stoi(c)].get_lname() << std::endl;
    std::cout << "Nickname: " << _contacts[std::stoi(c)].get_nname() << std::endl;
    std::cout << "Phone number: " << _contacts[std::stoi(c)].get_phone() << std::endl;
    std::cout << "Darkest secret: " << _contacts[std::stoi(c)].get_secret() << std::endl;
}
