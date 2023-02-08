/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:11:07 by barbizu-          #+#    #+#             */
/*   Updated: 2023/02/06 13:11:09 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

int main(void)
{
    //PhoneBook   pb;
    std::string str;

    std::cout << "Enter a new command: ";
    std::cin >> str;
    while (str != "EXIT")
    {
        if (str == "ADD")
            std::cout << "ADD";
        else if (str == "SEARCH")
            std::cout << "SEARCH";
        else if (str.length() == 0)
        {
            std::cout << "Enter a new command: ";
            std::cin >> str;
        }
        else
            std::cout << "Command not found. Try again: ";
        std::cin >> str;
    }
    return (0);
}