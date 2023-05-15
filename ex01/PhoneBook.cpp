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
    this->index = 0;
    this->n_cont = 8;
}

PhoneBook::~PhoneBook()
{
}

int PhoneBook::correct_num(std::string s)
{
    int i;
    int flag;

    i = 0;
    flag = 1;
    while (s[i])
    {
        if (!std::isdigit(s[i]))
            flag = 0;
        i++;
    }
    return (flag);
}

void    PhoneBook::add(void)
{
	std::string s;

    s = "";
    while (s.empty())
    {
        std::cout << "First name: ";
        std::getline(std::cin, s);
    }
    this->_contacts[this->index % 8].set_fname(s);
    s = "";
    while (s.empty())
    {
        std::cout << "Last name: ";
        std::getline(std::cin, s);
    }
    this->_contacts[this->index % 8].set_lname(s);
    s = "";
    while (s.empty())
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, s);
    }
    this->_contacts[this->index % 8].set_nname(s);
    s = "";
    while (s.empty())
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, s);
        if (!correct_num(s))
            s = "";
    }
    this->_contacts[this->index % 8].set_phone(s);
    s = "";
    while (s.empty())
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, s);
    }
    this->_contacts[this->index % 8].set_secret(s);
    this->index++;
}

int PhoneBook::is_wrong(int c)
{
    for (int i = 0; i < std::min(index, n_cont); i++)
    {
        if (c == (i + 1))
            return (1);
    }
    return (0);
}

void	PhoneBook::search(void)
{
    std::string c;
    std::string sub;

    if (index == 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
    }
    else
    {
        std::cout << "|-------------------------------------------|" << std::endl;
        std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
        for (int i = 0; i < std::min(index, n_cont); i++)
        {
            std::cout << "|" << std::setw(10) << i + 1;
            if (_contacts[i].get_fname().length() > 10)
            {
                sub = _contacts[i].get_fname().substr(0, 9) + ".";
                std::cout << "|" << std::setw(10) << sub;
            }
            else
                std::cout << "|" << std::setw(10) << _contacts[i].get_fname();
            if (_contacts[i].get_lname().length() > 10)
            {
                sub = _contacts[i].get_lname().substr(0, 9) + ".";
                std::cout << "|" << std::setw(10) << sub;
            }
            else
                std::cout << "|" << std::setw(10) << _contacts[i].get_lname();
            if (_contacts[i].get_nname().length() > 10)
            {
                sub = _contacts[i].get_nname().substr(0, 9) + ".";
                std::cout << "|" << std::setw(10) << sub << "|" << std::endl;
            }
            else
                std::cout << "|" << std::setw(10) << _contacts[i].get_nname() << "|" << std::endl;
        }
        std::cout << "|-------------------------------------------|" << std::endl;
        display_info(c);
    }
}

void    PhoneBook::display_info(std::string c)
{
    std::cout << "Enter index to display information: ";
    std::getline(std::cin, c);
    while (c.empty() || !is_wrong(std::atoi(c.c_str())))
    {
        std::cout << "Enter index to display information: ";
        std::getline(std::cin, c);
    }
    std::cout << "First Name: " << _contacts[std::atoi(c.c_str()) - 1].get_fname() << std::endl;
    std::cout << "Last Name: " << _contacts[std::atoi(c.c_str()) - 1].get_lname() << std::endl;
    std::cout << "Nickname: " << _contacts[std::atoi(c.c_str()) - 1].get_nname() << std::endl;
    std::cout << "Phone number: " << _contacts[std::atoi(c.c_str()) - 1].get_phone() << std::endl;
    std::cout << "Darkest secret: " << _contacts[std::atoi(c.c_str()) - 1].get_secret() << std::endl;
}
